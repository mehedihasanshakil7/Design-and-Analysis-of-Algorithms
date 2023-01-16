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
      if(n%2) {
        ll min = INT_MAX, i, temp;
        vector<ll> v;
        for(i = 1; i <= sqrt(n); i += 2) {
          if(n%i==0) {
            v.push_back(i);
            if(i != n/i)
            v.push_back(n/i);
          }
        }
        sort(v.begin(), v.end());
        for(i = 0; i < v.size()-1; i++) {
          temp = n-v[i];
          min = min > temp ? temp : min;
        }
        cout<<n-min<<" "<<min<<endl
      }
      else {
      cout<<n/2<<" "<<n/2<<endl
    }
    }
    return 0;
}