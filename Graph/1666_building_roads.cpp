#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
#define pb push_back
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
void dfs(int src, vector<int> v[], vector<bool>& vis) {
  vis[src] = true;
  for(auto i : v[src]) {
    if(!vis[i]) {
      dfs(i, v, vis);
    }
  }
}

void solve() {
  int n, m;
  cin>>n>>m;
  vector<int> v[n];
  int x, y;
  for(int i = 0; i < m; i++) {
    cin>>x>>y;
    v[x-1].push_back(y-1);
    v[y-1].push_back(x-1);
  }
  vector<bool> visited(n, false);
  vector<pair<int, int>> to_be_connect;
  for(int i = 0; i < n; i++) {
    if(!visited[i]) {
      if(i != 0) {
        to_be_connect.push_back({i, i+1});
      }
      dfs(i, v, visited);
      if(i != 0) {
        
      }
    }
  }
  cout<<to_be_connect.size()<<"\n";
  for(auto i : to_be_connect) {
    cout<<i.first<< " "<<i.second<<"\n";
  }
}


int main() {
  fastIO();
  
  solve();
  return 0;
}