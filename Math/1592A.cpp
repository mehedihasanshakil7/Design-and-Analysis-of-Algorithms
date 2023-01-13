#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll n, h;
      cin>>n>>h;
      vector<ll> v(n);
      for(ll i = 0; i < n; i++) {
        cin>>v[i];
      }
      sort(v.rbegin(), v.rend());
      //cout<<v[0]<<" "<<v[1]<<endl
      if(h % (v[0]+v[1]) == 0) {
        cout<<2 * (h / (v[0] + v[1]))<<endl
      }
      else if(h % (v[0]+v[1]) <= v[0]) {
        cout<<2 * (h / (v[0]+v[1])) + 1<<endl
      }
      else {
        cout<<2 * (h / (v[0]+v[1])) + 2<<endl
      }
    }
    return 0;
}