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
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x = 0, y = 0;
    map<char, pair<int, int>> m = {{'U', {0, 1}}, {'D', {0, -1}}, {'L', {-1, 0}}, {'R', {1, 0}}};
    bool can_pass = false;
    for(auto c : s) {
      x += m[c].first;
      y += m[c].second;
      if(x == 1 && y == 1) {
        can_pass = true;
        break;
      }
    }
    if(can_pass) {
      cout<<"YES\n";
    }
    else {
      cout<<"NO\n";
    }
  }
}


int main() {
  fastIO();
  
  solve();
  return 0;
}