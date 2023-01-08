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
      vector<ll> v(n);
      for(ll i = 0; i < n; i++) {
        cin>>v[i];
      }
      sort(v.begin(), v.end());
      bool can_paint = false;
      ll blue = v[0], red = 0;
      for(ll i = 1, j = n-1; i<j; i++, j--) {
        blue += v[i]; red += v[j];
        if(red > blue) {
          can_paint = true;
          break;
        }
      }
      if(can_paint) {
        cout<<"YES\n";
      }
      else {
        cout<<"NO\n";
      }
    }
    return 0;
}