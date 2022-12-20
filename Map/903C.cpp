#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    map<int, int> m;
    int box;
    for(int i = 0; i < n; i++) {
      cin>>box;
      m[box]++;
    }
    int maximum = 0;
    for(auto i : m) {
      maximum = max(maximum, i.second);
    }
    cout<<maximum<<endl;
    return 0;
}