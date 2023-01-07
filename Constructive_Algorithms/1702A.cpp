#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
  ll t;
  cin>>t;
  while(t--) {
    string s;
    cin>>s;
    int n = stoi(s);
    int len = s.length() - 1;
    int dec = pow(10, len);
    cout<<n - dec<<endl;
  }
    return 0;
}