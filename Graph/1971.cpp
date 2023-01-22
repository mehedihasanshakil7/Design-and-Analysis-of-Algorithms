class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> ed(n);
        int x, y;
        for(int i = 0; i < edges.size(); i++) {
            x = edges[i][0];
            y = edges[i][1];
            ed[x].push_back(y);
            ed[y].push_back(x);
        }
        vector<int> visited(n, 0);
        queue<int> q;
        q.push(source);
        visited[source] = 1;
        while(!q.empty()) {
            int node = q.front();
            if(node == destination) {
                return true;
            }
            q.pop();
            for(auto i : ed[node]) {
                if(!visited[i]) {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
        return false;
    }
};
