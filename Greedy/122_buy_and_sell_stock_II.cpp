#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
      cin>>v[i];
    }
    int profit = 0;
    for(int i = 0; i < n - 1; i++) {
      if(v[i] < v[i + 1]) {
        profit += v[i + 1] - v[i];
      }
    }
    cout<<profit<<endl;
    return 0;
}