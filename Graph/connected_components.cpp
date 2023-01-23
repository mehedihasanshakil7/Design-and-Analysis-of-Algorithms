void bfs(int start, vector<int> graph[], vector<int>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while(!q.empty()) {
        int value = q.front();
        q.pop();
        for(auto i : graph[value]) {
            if(visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int Solution::solve(int n, vector<vector<int> > &b) {
    vector<int> graph[n];
    int edges = b.size();
    for(int i = 0; i < edges; i++) {
        graph[b[i][0] - 1].push_back(b[i][1] - 1);
        graph[b[i][1] - 1].push_back(b[i][0] - 1);
    }
    vector<int> visited(n, 0);
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(visited[i] == 0) {
            count++;
            bfs(i, graph, visited);
        }
    }
    return count;
}