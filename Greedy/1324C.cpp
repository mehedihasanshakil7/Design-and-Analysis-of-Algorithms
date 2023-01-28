#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;
int main() {
    int t;
  cin>>t;
  while(t--) {
    string s;
    cin>>s;
    int index = -1;
    int jump = 0;
    int cell = s.length();
    for(int i = 0; i < cell; i++) {
      if(s[i] == 'R') {
        jump = max(i - index, jump);
        index = i;
      }
    }
    jump = max(cell-index, jump);
    cout<<jump<<endl
  }
  return 0;
}