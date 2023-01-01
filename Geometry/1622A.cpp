#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      vector<ll> v(3);
      cin>>v[0]>>v[1]>>v[2];
      sort(v.begin(), v.end());
      bool possible;
      if(v[0] == v[1]) {
        possible = v[2]%2 ? false : true;
      }
      else if(v[1] == v[2]) {
        possible = v[0]%2 ? false : true;
      }
      else {
        possible = v[2] == v[0]+v[1] ? true : false;
      }
      if(possible) {
        cout<<"YES\n";
      }
      else {
        cout<<"NO\n";
      }
    }
    return 0;
}