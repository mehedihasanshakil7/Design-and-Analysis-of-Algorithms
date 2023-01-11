#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;
int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll essence;
      cin>>essence;
      ll water = 100 - essence;
      ll gcd = __gcd(essence, water);
      cout<<essence/gcd+water/gcd<<endl
    }
    return 0;
}