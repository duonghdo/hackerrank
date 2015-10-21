#include <iostream>
#include <queue>
using namespace std;

void bfs(int start, int size, int** adjacencyMatrix){
	int* visited = new int[size]();
	long long int* distance = new long long int[size];
	for(int i = 0; i < size; i++){
		distance[i] = -1;
	}
	queue<int> Q;
	visited[start] = 1;
	distance[start] = 0;
	Q.push(start);
	while(!Q.empty()){
		int tmp = Q.front();
		Q.pop();
		for(int i = 0; i < size; i++){
			if(adjacencyMatrix[tmp][i] && !visited[i]){
				Q.push(i);
				distance[i] = distance[tmp] + 6;
				visited[i] = 1;
			}
		}
	}

	for(int i = 0; i < size; i++){
		if(distance[i]) cout << distance[i] << " ";
	}
	cout << endl;

	delete[] visited;
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
			int a, b;
			cin >> a >> b;
			adjacencyMatrix[a-1][b-1] = 1;
			adjacencyMatrix[b-1][a-1] = 1;
		}
		int start;
		cin >> start;
		start--;
		bfs(start, size, adjacencyMatrix);

		for(int i = 0; i < size; i++){
			delete[] adjacencyMatrix[i];
		}
		delete[] adjacencyMatrix;
	}

	return 0;
}