#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while (t--) {
      ll n, min = INT_MAX, neg = 0, sum = 0;
      cin>>n;
      vector<int> v(n);
      for(int i = 0; i < n; i++) {
        cin>>v[i];
        min = min > abs(v[i]) ? abs(v[i]) : min;
        sum += abs(v[i]);
        if(v[i] <= 0) {
          neg++;
        }
      }
      if(neg % 2) {
        sum -= 2*min;
      }
      cout<<sum<<endl
    }
    return 0;
}