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

void solve() {
  int n, m;
  cin>>n>>m;
  vector<vector<int>> v(n);
  int x, y;
  for(int i = 0; i < m; i++) {
    cin>>x>>y;
    v[x-1].pb(y-1);
    v[y-1].pb(x-1);
  }
  if(m == 0 || m != n-1) {
    cout<<"No"<<endl
      return;
  }
  for(int i = 0; i < n; i++) {
    if(v[i].size() > 2) {
      cout<<"No"<<endl
        return;
    }
  }
  stack<int> s;
  s.push(0);
  vector<bool> vis(n, false);
  vis[0] = true;
  while(!s.empty()) {
    int t = s.top();
    s.pop();
    for(auto i : v[t]) {
      if(!vis[i]) {
        s.push(i);
        vis[i] = true;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    if(!vis[i]) {
      cout<<"No"<<endl
        return;
    }
  }
  cout<<"Yes"<<endl
    return;
}

int main() {
  fastIO();
  
  solve();
  return 0;
}