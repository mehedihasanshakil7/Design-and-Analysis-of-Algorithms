#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
  ll t;
  cin>>t;
  while(t--) {
    ll n;
    cin>>n;
    if(n%4) {
      cout<<"NO\n";
    }
    else {
      cout<<"YES\n";
      ll evensum = 0;
      for(ll i = 2; i <= n; i = i + 2) {
        cout<<i<<" ";
        evensum += i;
      }
      ll oddsum = 0;
      for(ll i = 1; i < n - 1; i = i + 2) {
        cout<<i<<" ";
        oddsum += i;
      }
      cout<<evensum - oddsum<<endl
    }
  }
    return 0;
}