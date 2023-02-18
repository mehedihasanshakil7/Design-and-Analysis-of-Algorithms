#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

void solve() {
  int a, b, c;
  cin>>a>>b>>c;
  if(c <= a) {
    cout<<-1<<" "<<b<<endl
  }
  else {
    if(c / b < a) {
      cout<<1<<" "<<b<<endl
    }
    else {
      cout<<1<<" "<<-1<<endl
    }
  }
}

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      solve();
    }
    return 0;
}