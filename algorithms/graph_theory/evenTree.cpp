#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> adjList, int* subtreeSize, int root = 0){
	subtreeSize[root] = 1;		// size of subtree that has node #root as a root
	for(int i = 0; i < adjList[root].size(); i++){
		int child = adjList[root][i];
		if(!subtreeSize[child]){
			dfs(adjList, subtreeSize, child);
			subtreeSize[root] += subtreeSize[child];
		}
	}
}

int main(){
	int nodes, edges;
	cin >> nodes >> edges;
	vector<vector<int>> adjList;
	adjList.resize(nodes);
	int* subtreeSize = new int[nodes]();
	int a, b;
	for(int i = 0; i < edges; i++){
		cin >> a >> b;
		adjList[a-1].push_back(b-1);
		adjList[b-1].push_back(a-1);
	}
	dfs(adjList, subtreeSize);

	int treeCount = 0;
	for(int i = 1; i < nodes; i++){
		if(subtreeSize[i] % 2 == 0){
			treeCount++;
		}
	}
	cout << treeCount << endl;

	return 0;
}