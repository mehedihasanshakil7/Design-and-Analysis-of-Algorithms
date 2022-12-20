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
    int buy_price = v[0], max_profit = 0;
    for(int i = 1; i < n; i++) {
      if(buy_price > v[i]) {
        buy_price = v[i];
      }
      else if(v[i] - buy_price > max_profit) {
        max_profit = v[i] - buy_price;
      }
    }
    cout<<max_profit<<endl;
    return 0;
}
