#include <bits/stdc++.h>
#define newline cout << "\n"
#define pb push_back
#define ll long long
using namespace std;
void fastIO()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}

void solve() {
  ll n, m;
  cin>>n>>m;
  vector<pair<ll, ll>> graph[n+1];
  for(int i = 1; i <= m; i++) {
    ll x, y, w;
    cin>>x>>y>>w;
    graph[x].pb({y, w});
  }
  int src, dst;
  cin>>src>>dst;
  set<pair<ll, ll>> s;
  s.insert({0, src});
  vector<bool> vis(n+1, false);
  vector<ll> distance(n+1, LLONG_MAX);
  vector<int> par(n+1, -1);
  distance[src] = 0;
  while(s.size()) {
    auto node = *s.begin();
    s.erase(s.begin());
    if(node.second == dst) break;
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
  if(distance[dst] != LLONG_MAX)
    cout<<distance[dst];
  else
    cout<<"NO";
  newline;
}

int main()
{
  fastIO();

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}