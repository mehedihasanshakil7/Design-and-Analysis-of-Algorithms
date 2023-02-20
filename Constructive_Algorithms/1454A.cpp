#include <bits/stdc++.h>
#define endl "\n"
#define newline cout<<"\n"
using namespace std;

void solve() {
  int n;
  cin>>n;
  for(int i = n; i > (n+1) / 2; i--) {
    cout<<i<<" ";
  }
  for(int i = 1; i <= (n+1) / 2; i++) {
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