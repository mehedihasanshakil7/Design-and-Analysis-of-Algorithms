//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool checkBipartite(vector<int>adj[], int src, vector<int>&vis) {
        for(auto i : adj[src]) {
            if(!vis[i]) {
                if(vis[src] == 1) {
                    vis[i] = 2;
                }
                else {
                    vis[i] = 1;
                }
                if(!checkBipartite(adj, i, vis)) return false;
            }
            else if(vis[src] == vis[i]) {
                return false;
            }
        }
        return true;
    }
    
	bool isBipartite(int v, vector<int>adj[]){
	   vector<int> visited(v, 0);
	   for(int i = 0; i < v; i++) {
	       if(!visited[i]) {
	           visited[i] = 1;
	           if(!checkBipartite(adj, i, visited)) return false;
	       }
	   }
	   return true;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends