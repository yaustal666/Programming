// Depth - first - search algorithm
// 
// yaustal666

void dfs(int** graph, int len, bool* used, int a){
    used[a] = true;
    for (int i = 0; i < len; i++)
        if(graph[a][i] == 1 && !used[i])
            dfs(graph, len, used, i);    
}