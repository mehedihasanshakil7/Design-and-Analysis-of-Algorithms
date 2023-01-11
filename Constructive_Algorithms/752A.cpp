#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll n, m, k;
    cin>>n>>m>>k;
    ll cell = ceil(k / 2.0);
    ll desk, lane;
    if(cell%m == 0) {
      lane = cell/m;
      desk = m;
    }
    else {
      lane = ceil(cell/(double)m);
      desk = cell%m;
    }
    char c = k%2 ? 'L' : 'R';
    cout<<lane<<" "<<desk<<" "<<c<<endl
    return 0;
}