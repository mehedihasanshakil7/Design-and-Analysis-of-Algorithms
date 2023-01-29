#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
#define pb push_back
using namespace std;
int main() {
 int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
      cin>>v[i];
    }
    sort(v.rbegin(), v.rend());
    if(v[0] == v[n-1]) {
      cout<<"NO\n";
    }
    else {
      if(v[0] == v[1]) {
      swap(v[0], v[n-1]);
        }
      cout<<"YES\n";
      for(auto i : v) {
        cout<<i<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}