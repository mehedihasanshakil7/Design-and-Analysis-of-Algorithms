#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      int min = INT_MAX, max = 0;
      vector<int> v(4);
      for(int i = 0; i < 4; i++) {
        cin>>v[i];
        max = v[i] > max ? v[i] : max;
        min = v[i] < min ? v[i] : min;
      }
      int diff = max - min;
      if(abs(v[0]-v[3])==diff || abs(v[1]-v[2])==diff) {
        cout<<"YES\n";
      }
      else {
        cout<<"NO\n";
      }
    }
    return 0;
}