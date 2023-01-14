#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int n, solved_problem = 0;
    cin>>n;
    string s;
    char c;
    for(int i = 0; i < n; i++) {
      cin>>c;
      getline(cin, s);
      s = c + s;
      int one = 0;
      for(auto c: s) {
        if(c == '1') {
          one++;
        }
      }
      if(one >= 2) {
        solved_problem++;
      }
    }
    cout<<solved_problem<<endl
    return 0;
}