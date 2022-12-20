#include <bits/stdc++.h>
#define endl "\n";
using namespace std;
 
int main() 
{
    int n;
    cin>>n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
      cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(), v.end());
    int activity = 1;
    int time_tracker = v[0].first;
    for(int i = 1; i < n; i++) {
      if(v[i].second >= time_tracker) {
        activity++;
        time_tracker = v[i].first;
      }
    }
    cout<<activity<<endl;
    return 0;
}