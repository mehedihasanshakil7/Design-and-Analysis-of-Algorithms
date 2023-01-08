#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll k2, k3, k5, k6;
    cin>>k2>>k3>>k5>>k6;
    ll min1 = k2 < k5 ? k2 : k5;
    min1 = k6 < min1 ? k6 : min1;
    k2 = k2 - min1;
    ll min2 = k2 < k3 ? k2 : k3;
    cout<<min1*256+min2*32<<endl
    return 0;
}