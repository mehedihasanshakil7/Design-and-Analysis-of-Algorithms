#include <bits/stdc++.h>
#define endl "\n";
#define ll long long int
#define pb push_back
using namespace std;
const int mod = 1e9 + 7;
const long long int base = 26;

void fastIO()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
}

vector<int> rabin_karp(string txt)
{

  // pl = pattern length
  // tl = text length
  // sig_pw = significan power
  // pat_hash = hash value of pattern
  int tl = txt.size();

  ll pw = 1;

  vector<int> lengths;
  ll left = 0, right = 0, j = tl - 1;
  for (int i = 0; i < tl-1; i++)
  {
    left = ((left * base) % mod + (txt[i]-96)) % mod;
    right = (right + (((txt[j]-96) * pw) % mod)) % mod;
    pw = (pw * base) % mod;
    if(left == right) {
      lengths.pb(i+1);
    }
    j--;
  }
  return lengths;
}

int main()
{

  fastIO();
  string txt;
  cin >> txt;
  vector<int> v;
  v = rabin_karp(txt);
  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl
  return 0;
}