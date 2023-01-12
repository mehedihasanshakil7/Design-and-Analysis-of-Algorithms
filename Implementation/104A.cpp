#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin>>n;
    if((n >= 1 && n <= 10) || (n >= 22 && n <= 25)) {
      cout<<0<<endl
    }
    else if(n == 21) {
      cout<<1<<endl
    }
    else if(n == 20) {
      cout<<15<<endl
    }
    else {
      cout<<4<<endl
    }
    return 0;
}