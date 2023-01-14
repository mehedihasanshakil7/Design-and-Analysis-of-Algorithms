#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int k = n / 2;
    vector<string> s(n);
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(i <= k) {
          if(j >= k - i && j <= k + i) {
            s[i] += "D";
          }
          else {
            s[i] += "*";
          }
        }
        else {
          s[i] = s[n - 1 - i];
        }
      }
    }
    for(auto x : s) {
      cout<<x<<endl
    }
    return 0;
}