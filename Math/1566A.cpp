#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll n, s;
      cin>>n>>s;
      int rem_places = n - ceil(n/2.0) + 1;
      int median = s / rem_places;
      cout<<median<<endl
    }
    return 0;
}