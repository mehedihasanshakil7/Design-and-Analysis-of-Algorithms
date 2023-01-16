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
      bool is_optimal = true, increasing = true, decreasing = false;
      cin>>n;
      cin>>temp;
      int prev = temp;
      for(ll i = 1; i < n; i++) {
        cin>>temp;
        if(increasing && is_optimal) {
          if(temp >= prev) {
            prev = temp;
            continue;
          }
          else {
            prev = temp;
            decreasing = true;
            increasing = false;
          }
        }
        if(decreasing && temp <= prev && is_optimal) {
          prev = temp;
          continue;
        }
        else {
          is_optimal = false;
        }
      }
      if(is_optimal) {
        cout<<"YES\n";
      }
      else {
        cout<<"NO\n";
      }
    }
    return 0;
}