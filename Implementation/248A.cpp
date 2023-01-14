#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int n, l, r;
    int left_closed=0, left_opened=0, r_closed=0, r_opened=0;
    cin>>n;
    for(int i = 0; i < n; i++) {
      cin>>l>>r;
      if(l == 1) {
        left_opened++;
      }
      else {
        left_closed++;
      }
      if(r == 1) {
        r_opened++;
      }
      else {
        r_closed++;
      }
    }
    cout<<min(left_closed, left_opened)+min(r_opened, r_closed)<<endl
    return 0;
}