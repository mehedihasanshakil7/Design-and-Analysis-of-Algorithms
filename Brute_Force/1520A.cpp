#include <bits/stdc++.h>
#define endl "\n"
#define newline cout<<"\n"
using namespace std;
 
void solve() {
  int n;
  cin>>n;
  string s;
  cin>>s;
  map<char, int> m;
  m[s[0]] = 1;
  for(int i = 1; i < n; i++) {
    if(m[s[i]] && s[i-1] != s[i]) {
      cout<<"NO\n";
      return;
    }
    m[s[i]] = 1;
  }
  cout<<"YES\n";
}
 
int main() 
{
    int t;
    cin>>t;
    while(t--) {
      solve();
    }
    return 0;
}