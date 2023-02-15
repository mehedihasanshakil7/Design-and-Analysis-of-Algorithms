#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while (t--) {
      ll n, c, temp;
      cin>>n>>c;
      vector<int> v(n);
      for(int i = 0; i < n; i++) {
        cin>>temp;
        v[i] = i+1+temp;
      }
      sort(v.begin(), v.end());
      ll sum = 0, count = 0;
      for(int i : v) {
        if(sum + i > c) {
          break;
        }
        sum += i;
        count++;
      }
      cout<<count<<endl
    }
    return 0;
}