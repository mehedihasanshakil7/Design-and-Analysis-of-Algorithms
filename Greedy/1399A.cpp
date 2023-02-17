#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int n, temp, min = INT_MAX, max = 0;
      cin>>n;
      set<int> s;
      for(int i = 0; i < n; i++) {
        cin>>temp;
        s.insert(temp);
        min = temp < min ? temp : min;
        max = temp > max ? temp : max;
      }
      if(s.size() == (max-min+1)) {
        cout<<"YES\n";
      }
      else {
        cout<<"NO\n";
      }
    }
    return 0;
}