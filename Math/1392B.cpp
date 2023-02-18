#include <bits/stdc++.h>
#define endl "\n"
#define newline cout<<"\n"
#define ll long long
using namespace std;

void solve() {
  ll n, k, max = INT_MIN, min = INT_MAX;
  cin>>n>>k;
  vector<ll> v(n);
  for(int i = 0; i < n; i++) {
    cin>>v[i];
    max = v[i] > max ? v[i] : max;
    min = v[i] < min ? v[i] : min;
  }
  if(n == 1) {
    cout<<0<<endl;
    return;
  }
  if(k % 2) {
    for(ll i : v) {
      cout<<max-i<<" ";
    }
  }
  else {
    for(ll i : v) {
      cout<<(i - min)<<" ";
    }
  }
  newline;
}

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      solve();
    }
    return 0;
}