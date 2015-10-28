#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void prim(int start, int size, float** matrix){
	float* edges = new float[size]();
	for(int i = 0; i < size; i++){
		edges[i] = INFINITY;
	}

	edges[start] = 0;

	vector <int> visitedNodes;
	vector <int> remainingNodes;
	for(int i = 0; i< size; i++){
		remainingNodes.push_back(i);
	}
	visitedNodes.push_back(start);
	remainingNodes.erase(remainingNodes.begin()+start);
	
	while(!remainingNodes.empty()){
		float minEdge = INFINITY;
		int index = -1;
		int src = -1;
		for(int i = 0; i < visitedNodes.size(); i++){
			for(int j = 0; j < remainingNodes.size(); j++){
				if(matrix[visitedNodes[i]][remainingNodes[j]] < minEdge) {
					minEdge = matrix[visitedNodes[i]][remainingNodes[j]];
					src = i;
					index = j;
				}
			}
		}
		visitedNodes.push_back(remainingNodes[index]);
		edges[visitedNodes.back()] = minEdge;
		remainingNodes.erase(remainingNodes.begin()+index);
	}

	long long int sum = 0;
	for(int i = 0; i < size; i++){
		if(edges[i] < INFINITY) sum += edges[i];
	}
	cout << sum << endl;

	delete[] edges;
}

int main(){
	int size, edges;
	cin >> size >> edges;
	float** adjacencyMatrix = new float*[size];
	for(int i = 0; i < size; i++){
		adjacencyMatrix[i] = new float[size]();
	}
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(i == j) adjacencyMatrix[i][j] = 0;
			else adjacencyMatrix[i][j] = INFINITY;
		}
	}

	for(int i = 0; i < edges; i++){
		int a, b, w;
		cin >> a >> b >> w;
		if(w < adjacencyMatrix[a-1][b-1]){
			adjacencyMatrix[a-1][b-1] = w;
			adjacencyMatrix[b-1][a-1] = w;
		}
	}

	int start;
	cin >> start;
	start--;
	prim(start, size, adjacencyMatrix);

	for(int i = 0; i < size; i++){
		delete[] adjacencyMatrix[i];
	}
	delete[] adjacencyMatrix;

	return 0;
}