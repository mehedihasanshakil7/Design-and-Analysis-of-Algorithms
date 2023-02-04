#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
#define pb push_back
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void solve() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int initial_length = n;
    for(int i = 0, j = n-1; i < n / 2; i++, j--) {
      if((s[i]-'0') ^ (s[j]-'0')) {
        initial_length -= 2;
      }
      else {
        break;
      }
    }
    cout<<initial_length<<endl
  }
}


int main() {
  fastIO();
  
  solve();
  return 0;
}