#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
    int n, m;
    cin>>n>>m;
    string s;
    int change = 0;
    for(int i = 0; i < n; i++) {
      cin>>s;
      if(i != n-1) {
        if(s[m-1] == 'R') {
          change++;
        }
      }
      else {
        for(int k = 0; k < m-1; k++) {
          if(s[k] == 'D') {
            change++;
          }
        }
      }
    }
    cout<<change<<endl
    }
    return 0;
}