#include <bits/stdc++.h>
#define endl "\n";
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int temp, previous, count = 1;
    for(int i = 0; i < n; i++){
      cin>>temp;
      if(i==0){
        previous = temp;
        continue;
      }
      if(temp != previous){
        count++;
      }
      previous = temp;
    }
    cout<<count<<endl
    return 0;
}