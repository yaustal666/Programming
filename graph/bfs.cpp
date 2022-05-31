// Breadth - first - search algorithm
// 
// yaustal666

#include <vector>
#include <queue>

void bfs(int n, int** graph, std::vector<bool>& used, int len){
    used[n] = true;
    std::queue<int> q;
    q.push(n);

    while(!q.empty()){
        int j = q.front(); q.pop();
        for(int i = 0; i < len; i++){
            if(graph[j][i] == 1 && !used[i]){
                used[i] = true;
                q.push(i);
            }
        }
    }
}