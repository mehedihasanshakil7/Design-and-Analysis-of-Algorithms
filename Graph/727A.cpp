#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    ll a, b;
    cin>>a>>b;
    queue<ll> q;
    q.push(a);
    map<ll, ll> m;
    m[a] = 0;
    while(!q.empty() && q.front() != b) {
      ll val = q.front();
      q.pop();
      ll dv = val * 2;
      ll vl_10 = val * 10 + 1;
      if(dv <= b) {
        q.push(dv);
        m[dv] = val;
      }
      if(vl_10 <= b) {
        q.push(vl_10);
        m[vl_10] = val;
      }
    }
    if(q.empty()) {
      cout<<"NO\n";
    }
    else {
      vector<ll> v;
      ll val = q.front();
      // q.clear();
      while(val != 0) {
        v.push_back(val);
        val = m[val];
      }
      reverse(v.begin(), v.end());
      cout<<"YES\n"<<v.size()<<endl
      for(auto i : v) {
        cout<<i<<" ";
      }
      cout<<endl
    }
    return 0;
}