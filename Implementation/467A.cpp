#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll n, available = 0;
    cin>>n;
    ll p, q;
    for(int i = 0; i < n; i++) {
      cin>>p>>q;
      if(q-p >= 2) {
        available++;
      }
    }
    cout<<available<<endl
    return 0;
}