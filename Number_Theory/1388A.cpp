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
      ll sum = 30; //2.3+2.5+2.7
      if(sum >= n) {
        cout<<"NO\n";
      }
      else {
        cout<<"YES\n";
        ll last_one = n-sum;
        if(last_one == 6 || last_one == 10 || last_one == 14) {
          cout<<"6 10 15 "<<last_one-1<<endl //15 = 3.5
        }
        else {
        cout<<"6 10 14 "<<last_one<<endl
        }
      }
    }
    return 0;
}