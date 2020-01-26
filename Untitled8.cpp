#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t; cin>>t;
	while(t--)
	{
	  ll n; cin>>n;
	  ll count=0;
	  while(1)
	  {
	  	ll x=n%10;
	  	if(x==0)
	  	{
	  		count++;
	  		n=n/10;
		}
		else
		{
			break;
		}
	  }
	  if(n==1)
	  {
	  	cout<<"Yes"<<endl;
	  }
	   else{
	    ll s=0,s1=0;
	    while(true)
	    {    if(n==0)
	    break;
	    	if(n%2==0)
	    	{ s1++;
	    	 n>>=1;
			}
	    	else
	    	{
	    		n>>=1;
	    		s++;
			}
		}
		if(s!=1)
		{
			cout<<"No"<<endl;
		}
		else
		 if(s1<=count)
		cout<<"Yes"<<endl;
	     else 
	      cout<<"No"<<endl;
	  }	
}
}
