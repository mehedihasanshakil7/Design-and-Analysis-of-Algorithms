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
  string s = "codeforces";
  while(t--) {
    char c;
    cin>>c;
    if(s.find(c) != std::string::npos) {
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