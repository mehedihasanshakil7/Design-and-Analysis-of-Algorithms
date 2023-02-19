#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define newline cout<<"\n"
using namespace std;
const int mod = 1000000007;

void solve() {
  int n;
  cin>>n;
  set<int> s;
  s.insert(n);
  while(1) {
    n = n + 1;
    while(n % 10 == 0) {
      n /= 10;
    }
    if(s.find(n) != s.end()) {
      break;
    }
    s.insert(n);
  }
  cout<<s.size()<<endl;
}

int main() 
{
    int t = 1;
    // cin>>t;
    while(t--) {
      solve();
    }
    return 0;
}