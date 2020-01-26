#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    int c=0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                c++;
            }
            else
            {
                c=c+2;
            }
        }
    }
    return c;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
while(m--)
{
    int l,r; 
	cin>>l>>r;
  int mul=1;
  for(int i=l; i<=r; i++)
  {
      mul=mul*a[i];
  }
  cout<<mul<<endl;
  cout<<fun(mul)<<endl;
}
}

