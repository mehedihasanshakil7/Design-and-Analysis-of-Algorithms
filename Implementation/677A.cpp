#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll n, h, temp;
    cin>>n>>h;
    ll bend = 0;
    for(int i = 0; i < n; i++){
      cin>>temp;
      if(temp > h) {
        bend++;
      }
    }
    cout<<bend*2+(n-bend)<<endl
    return 0;
}
