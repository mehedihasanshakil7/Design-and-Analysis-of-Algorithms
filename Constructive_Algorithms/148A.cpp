#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    
    ll k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;
    ll suffered = 0;
    for(ll i = 1; i <= d; i++) {
      if(!(i%k && i%l && i%m && i%n)) {
        suffered++;
      }
    }
    cout<<suffered<<endl
    return 0;
}
