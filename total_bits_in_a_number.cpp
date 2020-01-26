#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int fun(int n)
{   int c=0;
	while(n)
	{  c+=n&1;
		n=n>>1;
	}
	return c;
}
int main()
{  int t; cin>>t;
 while(t--)
 {
     ll n; cin>>n;
     ll tb=(int)log2(n)+1;
     ll sb=fun(n);
     ll r=tb-sb;
     if(r==0)
     {
     	cout<<"Pranshu"<<endl;
	 }
     else if(r%2!=0)
     {
     	cout<<"Jatin"<<endl;
	 }
	 else
	 cout<<"Pranshu"<<endl;
	//cout<<fun(n)<<endl;
}
}
