#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll k, r;
    cin>>k>>r;
    for(ll i = 1; ; i++) {
      if(i*k%10 == 0 || ((i*k-r)%10 == 0)) {
        cout<<i<<endl
        break;
      }
    }
    return 0;
}