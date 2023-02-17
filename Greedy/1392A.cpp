#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int n, temp, count = 1, prev;
      cin>>n;
      cin>>temp;
      prev = temp;
      for(int i = 1; i < n; i++) {
        cin>>temp;
        if(temp == prev) {
          count++;
        }
        prev = temp;
      }
      if(count == n) {
        cout<<n<<endl
      }
      else {
        cout<<1<<endl
      }
    }
    return 0;
}