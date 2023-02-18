#include <bits/stdc++.h>
#define endl "\n"
#define newline cout<<"\n"
using namespace std;

void solve() {
  int n, m;
  cin>>n>>m;
  vector<int> row(n, 0), col(m, 0);
  vector<vector<int>> v(n, vector<int>(m));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin>>v[i][j];
      if(v[i][j]) {
        row[i] = 1; col[j] = 1;
      }
    }
  }
  int count = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(row[i]==0 && col[j]==0) {
        v[i][j] = 1;
        row[i] = 1;
        col[j] = 1;
        count++;
      }
    }
  }
  if(count % 2) {
    cout<<"Ashish";
  }
  else {
    cout<<"Vivek";
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