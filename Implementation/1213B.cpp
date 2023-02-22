#include <bits/stdc++.h>
#define endl "\n"
#define newline cout<<"\n"
using namespace std;

void solve() {
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin>>v[i];
  }
  int mini = v[n-1], bad_prices = 0;
  for(int i = n-2; i >= 0; i--) {
    if(v[i] > mini) {
      bad_prices++;
    }
    else {
      mini = v[i];
    }
  }
  cout<<bad_prices<<endl;
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