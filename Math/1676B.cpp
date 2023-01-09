#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      ll min = INT_MAX, total_candies = 0, temp;
      for(ll i = 0; i < n; i++){
        cin>>temp;
        min = temp < min ? temp : min;
        total_candies += temp;
      }
      cout<<total_candies - min * n<<endl
    }
    return 0;
}