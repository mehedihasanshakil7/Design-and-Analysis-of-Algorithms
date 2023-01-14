#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int a1, a2, a3, a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int one=0, two=0, three=0, four=0;
    for(auto c : s) {
      if(c=='1') one++;
      else if(c=='2') two++;
      else if(c=='3') three++;
      else four++;
    }
    cout<<one*a1 + two*a2 + three*a3 + four*a4<<endl;
    return 0;
}