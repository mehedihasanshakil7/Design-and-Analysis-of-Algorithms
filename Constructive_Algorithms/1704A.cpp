#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int n, m;
      cin>>n>>m;
      string a, b;
      cin>>a>>b;
      int len_a = a.length();
      int len_b = b.length();
      if(a.substr(len_a-(len_b-1)) == b.substr(1) && a.substr(0, len_a - len_b + 1).find(b[0]) != string::npos) {
        cout<<"YES\n";  
      }
      else {
        cout<<"NO\n";
      }
    }
    return 0;
}