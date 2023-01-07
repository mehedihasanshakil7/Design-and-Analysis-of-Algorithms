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
      string s1, s2;
      cin>>s1>>s2;
      bool isSame = true;
      for(ll i=0; i<n; i++) {
        if((s1[i]=='R'&&s2[i]!='R') || (s1[i]=='G'||s1[i]=='B')&&s2[i]=='R'){
          isSame=false;
          break;
        }
      }
      if(isSame){
        cout<<"YES\n";
      }
      else{
        cout<<"NO\n";
      }
    }
    return 0;
}