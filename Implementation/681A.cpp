#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int n, before, after;
    cin>>n;
    string s;
    bool isGood = false;
    for(int i = 0; i < n; i++) {
      cin>>s>>before>>after;
      if(before >= 2400 && after > before) {
        isGood = true;
      }
    }
    if(isGood) {
      cout<<"YES\n";
    }
    else {
      cout<<"NO\n";
    }
    return 0;
}