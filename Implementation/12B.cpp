#include <bits/stdc++.h>
#define endl "\n"
#define newline cout<<"\n"
using namespace std;

void solve() {
  string s, t;
  cin>>s>>t;
  sort(s.begin(), s.end());
  for(int i = 0; i < s.size(); i++) {
    if(s[i] != '0' && s[0] == '0') {
      s[0] = s[i];
      s[i] = '0';
    }
  }
  if(s == t) {
    cout<<"OK\n";
  }
  else {
    cout<<"WRONG_ANSWER\n";
  }
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