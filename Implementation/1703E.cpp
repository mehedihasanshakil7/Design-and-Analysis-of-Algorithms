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
    int a[n][n];
    char c;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cin>>c;
        a[i][j] = c - '0';
      }
    }
    int result = 0;
    for(int i = 0; i < (n+1) / 2; i++) {
      for(int j = 0; j < n / 2; j++) {
        int one = a[i][j] + a[n-j-1][i] + a[n-i-1][n-j-1] + a[j][n-i-1];
        result += min(one, 4-one);
      }
    }
    cout<<result<<endl
  }
  return 0;
}