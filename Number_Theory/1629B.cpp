#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
  ll t;
  cin>>t;
  while(t--) {
    ll l, r, k;
    cin>>l>>r>>k;
    ll range = (r - l) + 1;
    ll operation;
    if(range==1) {
      if(l == 1) {
        cout<<"NO\n";
      }
      else {
        cout<<"YES\n";
      }
      continue;
    }
    if(range%2 && l%2) {
      operation = range / 2 + 1;
    }
    else {
      operation = range / 2;
    }
    if(operation <= k) {
      cout<<"YES\n";
    }
    else {
      cout<<"NO\n";
    }
  }
    return 0;
}