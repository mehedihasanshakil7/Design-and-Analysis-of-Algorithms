#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      string s, t;
      cin>>s>>t;
      string a = s, b = t;
      while(a.size() != b.size()) {
        int asize = a.size(), bsize = b.size();
        if(asize < bsize) {
          a += s;
        }
        else {
          b += t;
        }
      }
      if(a == b) {
        cout<<a<<endl
      }
      else {
        cout<<-1<<endl
      }
    }
    return 0;
}