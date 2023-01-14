#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll n, x, ice_cream, distress = 0;
    cin>>n>>x;
    ll ice_cream_left = x;
    char c;
    for(ll i = 0; i<n; i++) {
      cin>>c>>ice_cream;
      if(c == '+') {
        ice_cream_left += ice_cream;
      }
      else if(ice_cream_left >= ice_cream) {
        ice_cream_left -= ice_cream;
      }
      else {
        distress++;
      }
    }
    cout<<ice_cream_left<<" "<<distress<<endl
    return 0;
}