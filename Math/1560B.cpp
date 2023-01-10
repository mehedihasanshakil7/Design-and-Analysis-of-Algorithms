#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll n;
    cin>>n;
    ll a, b, c;
    for(int i = 0; i < n; i++) {
      cin>>a>>b>>c;
      ll people = abs(a-b)*2;
      if(a > people || b > people || c > people) {
        cout<<-1<<endl
        continue;
      }
      ll oppsite = c + people/2;
      if(oppsite > people) {
        oppsite = oppsite % people;
      }
      cout<<oppsite<<endl
    }
    return 0;
}