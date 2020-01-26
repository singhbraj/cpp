#include<bits/stdc++.h>
using namespace std;
bool fun(int n)
{
    if(n==1)
    return false;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
  int t; cin>>t;
  while(t--)
  {
      int n; cin>>n;
      int c=0;
      for(int i=1; i<n; i++)
      {
          if(__gcd(i,n)==1)
          {
              c++;
          }
      }
      cout<<c<<endl;
      if(fun(n))
      {
          cout<<"TRUE"<<endl;
      }
      else
      cout<<"FALSE"<<endl;
  }
}
