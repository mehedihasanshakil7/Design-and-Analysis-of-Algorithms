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
      ll h, w, max = 0, base = 0;
      for(ll i = 0; i < n; i++) {
        cin>>h>>w;
        if(h < w) {
          base += h;
          max = w > max ? w : max;
        }
        else {
          base += w;
          max = h > max ? h : max;
        }
      }
      cout<<2*base + max*2<<endl
    }
    return 0;
}