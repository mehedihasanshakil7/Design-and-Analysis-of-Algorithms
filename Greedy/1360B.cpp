#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define newline cout<<"\n"
using namespace std;
const int mod = 1000000007;

void solve() {
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin>>v[i];
  }
  sort(v.begin(), v.end());
  int diff = INT_MAX;
  for(int i = 1; i < n && diff; i++) {
    if(v[i]-v[i-1] < diff) {
      diff = v[i] - v[i-1];
    }
  }
  cout<<diff<<endl;
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