#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{   
    int n;
    cin>>n;
    for(int i = 1; i < n; i++) {
      if(i%2) {
        cout<<"I hate that ";
      }
      else {
        cout<<"I love that ";
      }
    }
    if(n%2) {
      cout<<"I hate it\n";
    }
    else {
      cout<<"I love it\n";
    }
    return 0;
}