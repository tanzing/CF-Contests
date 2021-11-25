#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
  int t;
  cin>>t;
 
  while(t--)
  {
    int flag = 0;
    int z;
    cin>>z;
    string str = to_string(z);
    int n =str.size();
    for(int i=0;i<n;i++)
    {
      if((str[i]-'0')%2==0)
      flag=1;
    }
 
    if(flag==0)
    {
      cout<<"-1"<<"\n";
    }
    else if(z%2==0)
    {
      cout<<0<<"\n";
    }
    else if(((str[0]-'0')%2==0)|| (str[n-1]-'0')%2==0)
    {
      cout<<1<<"\n";
    }
    else
    {
      cout<<2<<"\n";
    }
  }
} 