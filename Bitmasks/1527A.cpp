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
    while(1) {
      if((n & (n-1)) == 0) {
        break;
      }
      n = n & (n-1);
    }
    cout<<n - 1<<endl
  }
  return 0;
}
