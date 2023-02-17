#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--) {
      string s;
      cin>>s;
      int count = 0;
      stack<char> st1, st2;
      for(char c : s) {
        if(c == '(') st1.push(c);
        else if(c == '[') st2.push(c);
        else if(c == ')' && !st1.empty()) {
          count++;
          st1.pop();
        }
        else if(c == ']' && !st2.empty()) {
          count++;
          st2.pop();
        }
      }
      cout<<count<<endl
    }
    return 0;
}