#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<char> v;
    for(int i = 1; i <= 1000; i++) {
      string s = to_string(i);
      for(auto c : s) {
        v.push_back(c);
      }
    }
    cout<<v[n-1]<<endl
    return 0;
}