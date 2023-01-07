#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll n;
    cin>>n;
    string temp;
    cin>>temp;
    string s;
    getline(cin, s);
    s = temp + s;
    if(s.find("1") != string::npos) {
      cout<<"HARD\n";
    }
    else {
      cout<<"EASY\n";
    }
    return 0;
}