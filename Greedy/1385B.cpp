#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define newline cout<<"\n"
using namespace std;
const int mod = 1000000007;

void solve() {
  int n, temp;
  cin>>n;
  unordered_set<int> s;
  for(int i = 0; i < 2 * n; i++) {
    cin>>temp;
    if(s.find(temp) == s.end()) {
      s.insert(temp);
      cout<<temp<<" ";
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