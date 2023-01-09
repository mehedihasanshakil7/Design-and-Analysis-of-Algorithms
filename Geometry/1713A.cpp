#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      ll x, y, max_xpos = 0, max_xneg = 0, max_ypos = 0, max_yneg = 0;
      for(ll i = 0; i < n; i++) {
        cin>>x>>y;
        if(x == 0) {
          if(y < 0) {
            max_yneg = y < max_yneg ? y : max_yneg;
          }
          else {
            max_ypos = y > max_ypos ? y : max_ypos;
          }
        }
        else {
          if(x < 0) {
            max_xneg = x < max_xneg ? x : max_xneg;
          }
          else {
            max_xpos = x > max_xpos ? x : max_xpos;
          }
        }
      }
      cout<<2*(max_xpos-max_xneg)+2*(max_ypos-max_yneg)<<endl
    }
    return 0;
}