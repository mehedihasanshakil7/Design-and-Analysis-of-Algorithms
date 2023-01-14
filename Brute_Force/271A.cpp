#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int year;
    cin>>year;
    while(1) {
      year++;
      string s = to_string(year);
      set<int> st;
      for(auto c : s) {
        st.insert(c);
      }
      if(st.size() == 4) {
        cout<<year<<endl
        break;
      }
    }
    return 0;
}