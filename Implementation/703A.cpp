#include <bits/stdc++.h>
#define endl "\n";
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int m, c, mishka_point = 0, chris_point = 0;
    for(int i = 0; i < n; i++) {
      cin>>m>>c;
      if(m == c) {
        continue;
      }
      if(m > c) {
        mishka_point++;
      }
      else {
        chris_point++;
      }
    }
    if(mishka_point > chris_point) {
      cout<<"Mishka\n";
    }
    else if(chris_point > mishka_point) {
      cout<<"Chris\n";
    }
    else {
      cout<<"Friendship is magic!^^\n";
    }
    return 0;
}