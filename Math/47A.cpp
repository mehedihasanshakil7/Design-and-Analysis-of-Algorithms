#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int n2 = n * 2;
    int flr = floor(sqrt(n2));
    int cel = ceil(sqrt(n2));
    if(flr != cel && flr*cel == n2) {
      cout<<"YES\n";
    }
    else {
      cout<<"NO\n";
    }
    return 0;
}