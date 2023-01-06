#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    string s;
    getline(cin, s);
    set<char> st;
    for(auto i : s) {
      if(i >= 'a' && i <= 'z') {
      st.insert(i);
      }
    }
    cout<<st.size()<<endl
    return 0;
}