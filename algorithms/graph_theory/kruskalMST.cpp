#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
	int node1;
	int node2;
	int weight;
} edge;

int compareEdge(edge a, edge b){
	return a.weight > b.weight;
}

int findID(int* id, int a){
	while(a != id[a]){
		a = id[a];
	}
	return a;
}

int connected(int* id, int a, int b){
	return findID(id, a) == findID(id, b);
}

void unionTree(int* id, int a, int b){
	int aRoot = findID(id, a);
	int bRoot = findID(id, b);

	if(aRoot != bRoot){
		id[aRoot] = bRoot;
	}
}

void kruskal(vector<edge> ve, int nodes){
	int* treeID = new int[nodes];
	for(int i = 0; i < nodes; i++){
		treeID[i] = i;
	}

	int count = 0;
	int sum = 0;
	while(count < nodes-1){
		edge tmp = ve.back();
		ve.pop_back();

		if(connected(treeID, tmp.node1, tmp.node2)){
			continue;
		}
		else{
			sum += tmp.weight;
			unionTree(treeID, tmp.node1, tmp.node2);
			count++;
		}
	}
	cout << sum << endl;
}

int main(){
	int nodes, edges;
	cin >> nodes >> edges;
	edge e;
	vector<edge> V;
	while(edges--){
		int x, y, r;
		cin >> x >> y >> r;
		e.node1 = x-1;
		e.node2 = y-1;
		e.weight = r;
		V.push_back(e);
	}
	sort(V.begin(), V.end(), compareEdge);
	kruskal(V, nodes);


	return 0;
}