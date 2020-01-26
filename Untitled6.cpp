#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int fun(ll n)
{  
vector<int> v;
for(int i=1; i<=sqrt(n); i++)
{
	if(n%i==0)
	{
		if(n/i==i)
		{
			v.push_back(i);
		}
		else
		{
			v.push_back(i);
			v.push_back(n/i);
		}
	}
}
for(int i=0; i<v.size(); i++)
{
	cout<<v[i]<<" ";
}
}

int main()
{ int t; //cin>>t;
scanf("%d",&t);
while(t--)
{
	ll a,b;
	scanf("%d%d",&a,&b);
	ll n=b-a;
	fun(n);


}
return 0;
	
}
