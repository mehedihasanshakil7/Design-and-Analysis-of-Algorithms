#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll n, k;
    cin>>n>>k;
    if((n/k)%2) {
      cout<<"YES\n";
    }
    else {
      cout<<"NO\n";
    }
    return 0;
}