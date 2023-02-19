#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define newline cout<<"\n"
using namespace std;
const int mod = 1000000007;

void solve() {
  ll x, y, a, b;
  cin>>x>>y>>a>>b;
  ll maxi = max(x, y);
  ll mini = min(x, y);
  ll ans = (maxi - mini) * a;
  if(a * 2 < b) {
    ans += mini * a * 2;
  }
  else {
    ans += mini * b;
  }
  cout<<ans<<endl;
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