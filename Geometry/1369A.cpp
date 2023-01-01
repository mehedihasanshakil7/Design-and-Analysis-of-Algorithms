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
      }
    }
    return 0;
}
