#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int n;
      cin>>n;
      if(n % 2 == 0) {
        cout<<"No\n";
        continue;
      }
      ll j = 2 * n;
      cout<<"Yes\n";
      for(int i = 1; i <= n; i++) {
        cout<<i<<" "<<j<<endl
        j -= 2;
        if(j == n -1) {
          j = 2 * n - 1;
        }
      }
    }
    return 0;
}