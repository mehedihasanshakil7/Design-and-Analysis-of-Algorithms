#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll n, m;
      cin>>n>>m;
      if(n % m) {
        cout<<"NO\n";
      }
      else {
        cout<<"YES\n";
      }
    }
    return 0;
}