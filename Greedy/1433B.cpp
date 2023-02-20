#include <bits/stdc++.h>
#define endl "\n"
#define newline cout<<"\n"
using namespace std;
 
void solve() {
  int n, temp, count = 0, moves = 0;
  bool first = true;
  cin>>n;
  for(int i = 0; i < n; i++) {
    cin>>temp;
    if(temp == 1 && first) {
      first = false;
    }
    else if(temp == 1 && !first) {
      moves += count;
      count = 0;
    }
    else if(temp == 0 && !first) {
      count++;
    }
  }
  cout<<moves<<endl;
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