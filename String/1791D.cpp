#include <bits/stdc++.h>
#define endl "\n";
#define pb push_back
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int n;
      cin>>n;
      string s;
      cin>>s;
      set<char> s1, s2;
      vector<int> v1, v2;
      for(int i = 0; i < n-1; i++) {
        s1.insert(s[i]);
        s2.insert(s[n-i-1]);
        v1.pb(s1.size());
        v2.pb(s2.size());
      }
      int max = 0, ans = 0, m = v1.size();
      for(int i = 0; i < m; i++) {
        if(v1[i] + v2[m-i-1] > ans) {
          ans = v1[i] + v2[m-i-1];
        }
      }
      cout<<ans<<endl
    }
    return 0;
}
