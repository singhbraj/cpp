#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t; 
	while(t--)
	{
		ll a,b; cin>>a>>b;
		ll d=9;
		
		ll e=b;
		ll c=0;
		while(b>0)
		{
		  d*=10;
		  //e*=10;
		  d+=9;
		  b/=10;
		  c++;
		}
		//ll e=d;
		d/=10;
		if(e==d)
		{
			cout<<c*a<<endl;
		}
		else
		cout<<(c-1)*a<<endl;
	}
}
