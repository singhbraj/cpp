#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{ int t; cin>>t;
while(t--)
{
	ll x,y;
	cin>>x>>y;
	ll n,m,k;
	cin>>n>>m>>k;
	ll a[n],b[n];
	for(ll i=0; i<n; i++)
	{
		cin>>a[i]>>b[i];
	}
	ll c[m],d[m];
	for(ll i=0; i<m; i++)
	{
		cin>>c[i]>>d[i];
	}
	ll e[k],f[k];
	for(ll i=0; i<k; i++)
	{
		cin>>e[i]>>f[i];
	}
ll bj1,bj2,bj11,bj22,bj111,bj222;
double distance=DBL_MAX;
	for(ll i=0; i<n; i++)
	{    bj1=a[i];
	    bj2=b[i];
	    ll u=(bj1-x)*(bj1-x);
	    ll z=(bj2-y)*(bj2-y);
	    double dis1=sqrt(u+z);
		for(ll j=0; j<m; j++)
		{  bj11=c[j];
		   bj22=d[j];
		   ll u1=(bj11-bj1)*(bj11-bj1);
		   ll z1=(bj22-bj2)*(bj22-bj2);
		   double dis2=sqrt(u1+z1);
			for(ll q=0; q<k; q++)
			{  bj111=e[q];
			   bj222=f[q];
		    ll u2=(bj111-bj11)*(bj111-bj11);
		    ll z2=(bj222-bj22)*(bj222-bj22);
		    double dis3=sqrt(u2+z2);
		    double D=dis1+dis2+dis3;
		    if(distance>D)
		    {
		    	distance=D;
			}
			
			}
		}
		
	}
//-------------------second Part--------------------------------------
ll Bj1,Bj2,Bj11,Bj22,Bj111,Bj222;
double Distance=DBL_MAX;
		for(ll i=0; i<m; i++)
	{    Bj1=c[i];
	    Bj2=d[i];
	    ll u=(Bj1-x)*(Bj1-x);
	    ll z=(Bj2-y)*(Bj2-y);
	    double dis1=sqrt(u+z);
		for(ll j=0; j<n; j++)
		{  Bj11=a[j];
		   Bj22=b[j];
		   ll u1=(Bj11-Bj1)*(Bj11-Bj1);
		   ll z1=(Bj22-Bj2)*(Bj22-Bj2);
		   double dis2=sqrt(u1+z1);
			for(ll q=0; q<k; q++)
			{  Bj111=e[q];
			   Bj222=f[q];
		    ll u2=(Bj111-Bj11)*(Bj111-Bj11);
		    ll z2=(Bj222-Bj22)*(Bj222-Bj22);
		    double dis3=sqrt(u2+z2);
		    double D=dis1+dis2+dis3;
		    if(Distance>D)
		    {
		    	Distance=D;
			}
			
			}
		}
		
	}
	//cout<<std::setprecision(11)<<distance<<endl;
	//cout<<std::setprecision(11)<<Distance<<endl;
	if(distance<Distance)
	{
			cout<<std::setprecision(11)<<distance<<endl;
	}
	else
		cout<<std::setprecision(11)<<Distance<<endl;
}
}
