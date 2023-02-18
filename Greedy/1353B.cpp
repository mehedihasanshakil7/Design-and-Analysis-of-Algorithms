#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

void solve() {
  int n, k;
  cin>>n>>k;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin>>a[i];
  }
  for(int i = 0; i < n; i++) {
    cin>>b[i];
  }
  sort(a.begin(), a.end());
  sort(b.rbegin(), b.rend());
  for(int i = 0; i < k; i++) {
    if(a[i] < b[i]) {
      a[i] = b[i];
    }
    else {
      break;
    }
  }
  int sum = accumulate(a.begin(), a.end(), 0);
  cout<<sum<<endl;
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