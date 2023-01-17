#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      if(n%2) {
        int a, b, c = 1;
        for(ll i = (n-1)/2; i >= 2; i--) {
          if(__gcd(i, (n-1)-i) == 1) {
            a = i, b = (n-1)-i;
            break;
          }
        }
        cout<<a<<" "<<b<<" "<<1<<endl
      }
      else {
        cout<<((n-1)/2)<<" "<<((n-1)/2)+1<<" "<<1<<endl
      }
    }
    return 0;
}