#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void dijkstra(int start, int size, int** adjacencyMatrix){
	// int* visited = new int[size]();
	long long int* distance = new long long int[size];
	for(int i = 0; i < size; i++){
		distance[i] = -1;
	}
	queue<int> Q;
	distance[start] = 0;
	Q.push(start);
	while(!Q.empty()){
		int tmp = Q.front();
		Q.pop();
		// if(visited[tmp]) continue;
		for(int i = 0; i < size; i++){
			if(adjacencyMatrix[tmp][i]){
				long long int altDist = distance[tmp] + adjacencyMatrix[tmp][i];
				if((altDist < distance[i]) || (distance[i] == -1)) {
					distance[i] = altDist;
					Q.push(i);
				}
			}
		}
		// visited[tmp] = 1;
	}

	for(int i = 0; i < size; i++){
		if(distance[i]) cout << distance[i] << " ";
	}
	cout << endl;

	// delete[] visited;
	delete[] distance;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int size, edges;
		cin >> size >> edges;
		int** adjacencyMatrix = new int*[size];
		for(int i = 0; i < size; i++){
			adjacencyMatrix[i] = new int[size]();
		}
		for(int i = 0; i < edges; i++){
			int a, b, w;
			cin >> a >> b >> w;
			if(!adjacencyMatrix[a-1][b-1]){
				adjacencyMatrix[a-1][b-1] = w;
				adjacencyMatrix[b-1][a-1] = w;
			}
			else if(w < adjacencyMatrix[a-1][b-1]){
				adjacencyMatrix[a-1][b-1] = w;
				adjacencyMatrix[b-1][a-1] = w;
			}
		}
		int start;
		cin >> start;
		start--;
		dijkstra(start, size, adjacencyMatrix);

		for(int i = 0; i < size; i++){
			delete[] adjacencyMatrix[i];
		}
		delete[] adjacencyMatrix;
	}

	return 0;
}