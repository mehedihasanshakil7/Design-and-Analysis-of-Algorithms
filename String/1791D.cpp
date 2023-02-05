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
    
    set<char> s1, s2;
    
    vector<int> v1(n+1), v2(n+1);
    
    for(int i = 0; i < n; i++) {
      s1.insert(s[i]);
      v1[i+1] = s1.size();
    }
    for(int i = n-1; i >= 0; i--) {
      s2.insert(s[i]);
      v2[n-i] = s2.size();
    }
    int ans = 0;
    for(int i = 0; i <= n; i++) {
      ans = max(v1[i]+v2[n-i], ans);
    }
    cout<<ans<<endl
  }
}


int main() {
  fastIO();
  
  solve();
  return 0;
}