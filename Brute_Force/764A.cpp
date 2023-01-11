#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;
int main() 
{
    ll a, b, c, count = 0;
    cin>>a>>b>>c;
    for(ll i = b; i <= c; i += b) {
    if(i % a == 0) {
      count++;
    }
    }
    cout<<count<<endl
    return 0;
}