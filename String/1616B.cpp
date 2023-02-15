#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

void fastIO()
{
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
    int i;
    for(i = 1; i < n; i++) {
      if(i == 1 && s[i-1] <= s[i]) {
        break;
      }
      else if(s[i-1] < s[i]) {
        break;
      }
    }
    string rev = s.substr(0, i);
    reverse(rev.begin(), rev.end());
    string ans = s.substr(0, i) + rev;
    cout<<ans<<endl
  }
}

int main()
{
  fastIO();
  solve();
  return 0;
}