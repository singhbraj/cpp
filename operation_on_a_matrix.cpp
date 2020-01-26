#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	int t; cin>>t;
	while(t--)
	{
		ll n; ll m;
		cin>>n>>m;
		ll q; cin>>q;
		if(q<=300){
		
		int a[n+1][m+1];
		for(ll i=1; i<=n; i++)
		{
			for(ll j=1; j<=m; j++)
			{
				a[i][j]=0;
			}
		}
		
		while(q--)
		{
			ll x; ll y;
			cin>>x>>y;
		   for(ll i=1; i<=m; i++)
		   {
		   	a[x][i]+=1;
		   }
		   for(ll j=1; j<=n; j++)
		   {
		   	a[j][y]+=1;
		   }
				  
		}
			
	
		ll count=0;
			for(ll i=1; i<=n; i++)
		{
			for(ll j=1; j<=m; j++)
			{
				if(a[i][j]%2!=0)
				{
					count++;
				}
			}
		}
			cout<<count<<endl;
	} 
	ll x[q];
	ll y[q];
	for(ll i=0; i<q; i++)
	{
		cin>>x[i]>>y[i];
    }
	sort(x,x+q);
	sort(y,y+q);
	ll count=0;
	ll odd=0;
	for(ll i=0; i<q; i++)
	{
		if(x[i]==x[i+1])
		{
			i++;
			continue;
		}
		else
		{
			count++;
			odd+=m;
		}
	}
	for(ll i=0; i<q; i++)
	{  if(y[i]==y[i+1])
		{
			i++;
			continue;
		}
		else
		{ 
			odd=odd+n-2*count;
		}
	}
	cout<<odd<<endl;	

	
	}
}
