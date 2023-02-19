#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define newline cout<<"\n"
using namespace std;
const int mod = 1000000007;

void solve() {
  string s;
  cin>>s;
  int n = s.size();
  string zero;
  for(int i = 0; i < n-1; i++) {
    zero += '0';
  }
  vector<string> v;
  for(int i = 0; i < n; i++) {
    if(s[i] != '0') {
      v.push_back(s[i] + zero.substr(i));
    }
  }
  cout<<v.size()<<endl;
  for(string i : v) {
    cout<<i<<" ";
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