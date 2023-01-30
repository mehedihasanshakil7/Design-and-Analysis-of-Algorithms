#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i = 0; i < n; i++) {
        cin>>v[i];
      }
      int xor_ans;
      for(int i = 0; i < n; i++) {
        xor_ans = 0;
        for(int j = 0; j < n; j++)  {
          if(i != j) {
            xor_ans = xor_ans ^ v[j];
          }
        }
        if(xor_ans == v[i]) {
          break;
        }
      }
      cout<<xor_ans<<"\n";
    }
    return 0;
}