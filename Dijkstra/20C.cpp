#include <bits/stdc++.h>
#define newline cout<<"\n"
#define pb push_back
#define ll long long
using namespace std;
 
void solve() {
  ll n, m;
  cin>>n>>m;
  vector<pair<ll, ll>> graph[n+1];
  for(int i = 1; i <= m; i++) {
    ll x, y, z;
    cin>>x>>y>>z;
    graph[x].pb({y, z});
    graph[y].pb({x, z});
  }
  set<pair<ll, ll>> s;
  s.insert({0, 1});
  vector<bool> vis(n+1, false);
  vector<ll> distance(n+1, LLONG_MAX);
  vector<int> par(n+1, -1);
  distance[1] = 0;
  while(s.size()) {
    auto node = *s.begin();
    s.erase(s.begin());
    if(vis[node.second]) continue;
    vis[node.second] = true;
    for(auto v : graph[node.second]) {
      if(node.first + v.second < distance[v.first]) {
        distance[v.first] = node.first + v.second;
        s.insert({distance[v.first], v.first});
        par[v.first] = node.second;
      }
    }
  }
  if(par[n] == -1) {
    cout<<-1; newline;
    return;
  }
  vector<int> path;
  int i = n;
  while(i != -1) {
    path.pb(i);
    i = par[i];
  }
  for(int i = path.size()-1; i >= 0; i--) {
    cout<<path[i]<<" ";
  }
  newline;
}
 
int main() 
{
  ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t = 1;
// 	cin>>t;
	while(t--) {
	  solve();
	}
  return 0;
}
