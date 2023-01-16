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
      int temp;
      cin>>temp;
      int gcd = temp;
      for(int i = 1; i < n; i++) {
        cin>>temp;
        gcd = __gcd(gcd, temp);
      }
      cout<<temp/gcd<<endl
    }
    return 0;
}