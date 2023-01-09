#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int n, m;
      cin>>n>>m;
      string s[n];
      for(int i = 0; i < n; i++) {
        cin>>s[i];
      }
      int min = INT_MAX;
      for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
          int temp = 0;
          for(int k = 0; k < m; k++) {
            temp += abs(s[i][k]-s[j][k]);
          }
          min = temp < min ? temp : min;
        }
      }
      cout<<min<<endl
    }
    return 0;
}