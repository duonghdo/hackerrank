#include <iostream>
#include <cmath>
using namespace std;

void floyd(float** matrix, int nodes){
	for(int i = 0; i < nodes; i++){
		for(int j = 0; j < nodes; j++){
			for(int k = 0; k < nodes; k++){
				if(matrix[j][i] + matrix[i][k] < matrix[j][k])
					matrix[j][k] = matrix[j][i] + matrix[i][k];
			}
		}
	}
}

int main(){
	int nodes, edges;
	cin >> nodes >> edges;
	float** adjMatrix = new float*[nodes];
	for(int i = 0; i < nodes; i++){
		adjMatrix[i] = new float[nodes];
	}

	for(int i = 0; i < nodes; i++){
		for(int j = 0; j < nodes; j++){
			if(i == j) adjMatrix[i][j] = 0;
			else adjMatrix[i][j] = INFINITY;
		}
	}

	for(int i = 0; i < edges; i++){
		int x, y, w;
		cin >> x >> y >> w;
		adjMatrix[x-1][y-1] = w;
	}

	floyd(adjMatrix, nodes);

	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		if(adjMatrix[a-1][b-1] != INFINITY) cout << adjMatrix[a-1][b-1] << " " << endl;
		else cout << -1 << endl;
	}

	for(int i = 0; i < nodes; i++){
		delete[] adjMatrix[i];
	}
	delete[] adjMatrix;

	return 0;
}