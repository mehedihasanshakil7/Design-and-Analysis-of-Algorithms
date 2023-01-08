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
      vector<ll> v(n);
      for(int i = 0; i < n; i++) {
        cin>>v[i];
      }
      sort(v.begin(), v.end());
      vector<ll> v2(m);
      for(int i = 0; i < m; i++) {
        cin>>v2[i];
      }
      ll sum = 0;
      for(int i = 0; i < m; i++) {
        v[0] = v2[i];
        sort(v.begin(), v.end());
      }
      for(int i = 0; i < n; i++) {
        sum += v[i];
      }
      cout<<sum<<endl
    }
    return 0;
}