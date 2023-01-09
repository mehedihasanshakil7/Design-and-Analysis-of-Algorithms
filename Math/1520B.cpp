#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      string s = to_string(n);
      ll len = s.length();
      if(n <= 9) {
        cout<<n<<endl
      }
      else {
        string s2 = "";
        for(ll i = 0; i < len; i++) {
          s2 = s2 + s[0];
        }
        ll n2 = stoll(s2);
        if(n2 <= n) {
          cout<<(len-1)*9 + (s[0]-'0')<<endl
        }
        else {
          cout<<(len-1)*9 + (s[0]-'0') - 1<<endl
        }
      }
    }
    return 0;
}