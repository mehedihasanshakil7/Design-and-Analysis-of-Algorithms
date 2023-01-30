#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
#define pb push_back
using namespace std;
int main() {
 int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
   if(n == 1) cout<<3<<endl
   else if((n & (n-1)) == 0) cout<<n+1<<endl
   else if((n & 1)) cout<<1<<endl
   else {
     int count_zero = 0;
     while((n & 1) == 0) {
       n = n>>1;
       count_zero++;
     }
     int ans = (1<<count_zero);
     cout<<ans<<endl
   }
  }
  return 0;
}