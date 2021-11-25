#include <bits/stdc++.h>
using namespace std;


int main() {

  int t;
  cin>>t;

  while(t--)
  {

    int a,b;
    cin>>a>>b;

    int f1 = (a+b)/4;
    int f2 = min(a,b);




    cout<<min(f1,f2)<<"\n";
    


  }
} 