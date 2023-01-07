#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll n, ballons = 0;
      cin>>n;
      char c;
      map<char, int> mp;
      for(ll i = 0; i < n; i++) {
        cin>>c;
        if(mp[c] == 0) {
          ballons += 2;
          mp[c]++;
        }
        else {
          ballons++;
        }
      }
      cout<<ballons<<endl
    }
    return 0;
}