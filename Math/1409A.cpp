#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define newline cout<<"\n"
using namespace std;
const int mod = 1000000007;

void solve() {
  int a, b;
  cin>>a>>b;
  int ans = abs(a - b) / 10;
  if(abs(a - b) % 10) {
    ans++;
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