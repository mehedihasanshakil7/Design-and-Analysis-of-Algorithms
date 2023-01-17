#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int t;
    cin>>t;
    int sum = 0;
    int i = 19;
    int count = 0;
    while(1) {
      int temp = i;
      while(temp) {
        sum += temp % 10;
        temp /= 10;
      }
      if(sum == 10) {
        count++;
      }
      if(count == t) {
        break;
      }
      sum = 0; i++;
    }
    cout<<i<<endl
    return 0;
}