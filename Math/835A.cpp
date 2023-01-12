#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int s, v1, v2, t1, t2;
    cin>>s>>v1>>v2>>t1>>t2;
    int time_for_first = t1*2 + s*v1;
    int time_for_second = t2*2 + s*v2;
    if(time_for_first < time_for_second) {
      cout<<"First\n";
    }
    else if(time_for_second < time_for_first) {
      cout<<"Second\n";
    }
    else {
      cout<<"Friendship\n";
    }
    return 0;
}