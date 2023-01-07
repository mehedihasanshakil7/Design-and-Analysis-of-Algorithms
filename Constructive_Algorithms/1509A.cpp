#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
  ll t;
  cin>>t;
  while(t--) {
    ll n, temp;
    cin>>n;
    vector<ll> odd, even;
    for(int i = 0; i < n; i++){
      cin>>temp;
      if(temp%2) {
        odd.push_back(temp);
      }
      else {
        even.push_back(temp);
      }
    }
    for(auto i : odd) {
      cout<<i<<" ";
    }
    for(auto i : even) {
      cout<<i<<" ";
    }
    cout<<endl
  }
    return 0;
}