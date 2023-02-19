#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define newline cout<<"\n"
using namespace std;
const int mod = 1000000007;

int main() 
{
    int x, y, n;
    cin>>x>>y>>n;
    int a[6] = {0, x, y};
    for(int i = 3; i <= 6; i++) {
      if(i == 6) {
        a[0] = a[5] - a[4];
      }
      else {
        a[i] = a[i-1] - a[i-2];
      }
    }
    int ans = ((a[n%6] % mod) + mod) % mod;
    cout<<ans<<endl;
    newline;
    return 0;
}