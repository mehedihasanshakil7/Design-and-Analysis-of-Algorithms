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
      ll temp, sum = 0;
      for(ll i = 0; i < n; i++) {
        cin>>temp;
        if(i <= 1) {
          sum += temp;
        }
        if(i == n-1) {
          if(sum > temp) {
            cout<<-1<<endl
          }
          else {
            cout<<"1 2 "<<n<<endl
          }
        }
      }
    }
    return 0;
}