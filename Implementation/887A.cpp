#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() 
{
    string s, s2;
    cin>>s;
    int n = s.size();
    for(int i = 0; i < n; i++) {
      if(s[i] == '1') {
        s2 = s.substr(i+1);
        break;
      }
    }
    int m = s2.size();
    int count = 0;
    for(auto c : s2) {
      if(c == '1') {
        count++;
      }
    }
    if(m - count >= 6) {
      cout<<"yes"<<endl;
    }
    else {
      cout<<"no"<<endl;
    }
    return 0;
}