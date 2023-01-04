#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll n;
    cin>>n;
    ll sum = 0, temp;
    for(ll i = 0; i < n; i++) {
      cin>>temp;
      sum += temp;
    }
    cout<<sum / (float) n<<endl
    return 0;
}