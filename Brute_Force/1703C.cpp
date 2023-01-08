#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int n, moves;
      cin>>n;
      vector<int> v(n);
      for(int i = 0; i < n; i++) {
        cin>>v[i];
      }
      for(int i = 0; i < n; i++) {
        cin>>moves;
        int u_count = 0, d_count = 0;
        string s;
        cin>>s;
        for(auto i : s) {
          if(i == 'U') {
            u_count++;
          }
          else {
            d_count++;
          }
        }
        int res = (v[i] + d_count - u_count) % 10;
        if(res < 0) {
          cout<<10 + res<<" ";
        }
        else {
          cout<<res<<" ";
        }
      }
      cout<<endl
    }
    return 0;
}
