#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll n, k, b, s;
      cin>>n>>k>>b>>s;
      if(k*b > s) {
        cout<<-1;
      }
      else {
        ll greatest_value, rem;
        if(s - k*b >= k) {
          greatest_value = k*b+k-1;
          rem = s - greatest_value;
        }
        else {
          greatest_value = s;
          rem = 0;
        }
        if(rem <= (k-1)*(n-1)) {
          for(ll i = 0; i < n; i++) {
            if(i == 0) {
              cout<<greatest_value<<" ";
            }
            else {
              if(rem >= k) {
                cout<<k-1<<" ";
                rem = rem - (k-1);
              }
              else if(rem > 0) {
                cout<<rem<<" ";
                rem = 0;
              }
              else {
                cout<<0<<" ";
              }
            }
          }
        }
        else {
          cout<<-1;
        }
      }
      cout<<endl
    }
    return 0;
}