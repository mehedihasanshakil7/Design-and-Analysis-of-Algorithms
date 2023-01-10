#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll a, b;
      cin>>a>>b;
      if(b%a==0) {
        cout<<a<<" "<<b<<endl
      }
      else {
        if(b/a > 1) {
          cout<<a<<" "<<a*2<<endl
        }
        else {
          cout<<"-1 -1\n";
        }
      }
    }
    return 0;
}