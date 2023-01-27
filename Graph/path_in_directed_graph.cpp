int Solution::solve(int a, vector<vector<int> > &b) {
    vector<int> v[a];
    int edges = b.size();
    for(int i = 0; i < edges; i++) {
        v[b[i][0]-1].push_back(b[i][1]-1);
    }
    vector<bool> visited(a, false);
    stack<int> stk;
    stk.push(0);
    visited[0] = true;
    while(!stk.empty()) {
        int ptr = stk.top();
        stk.pop();
        for(auto i : v[ptr]) {
            if(i == a-1) {
                    return 1;
                }
            if(!visited[i]) {
                stk.push(i);
                visited[i] = true;
            }
        }
    }
    return 0;
}
