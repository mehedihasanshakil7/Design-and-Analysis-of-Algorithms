#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int answer = 0;
    for(int i = 5; i <= n; i = i * 5) {
      answer += n / i;
    }
    cout<<answer<<endl
    return 0;
}
