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
			
			for(ll i=1; i<=n; i++)
		{
			for(ll j=1; j<=m; j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
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
}
