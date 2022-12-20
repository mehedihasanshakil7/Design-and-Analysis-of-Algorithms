#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main(void)
{
    int n, m;
    cin>>n>>m;
    string s1, s2;
    map<string, string> t;
    for(int i = 0; i < n; i++) {
      cin>>s2>>s1;
      t[s1] = s2;
    }
    // for(auto i : t) {
    //   cout<<i.first<<" "<<i.second<<endl;
    // }
    for(int i = 0; i < m; i++) {
      cin>>s1>>s2;
      cout<<s1<<" "<<s2<<" #"<<t[s2.substr(0, s2.size()-1)]<<endl;
    }
    return 0;
}
