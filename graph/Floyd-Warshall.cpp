#include<fstream>

void Floyd_Warshall(int** graph, int n){

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < n; k++)
                graph[j][k] = std::min(graph[j][k], graph[j][i] + graph[i][k]);
}