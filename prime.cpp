#include<bits/stdc++.h>
using namespace std;
void seive(int n)
{
	bool prime[n+1];
	for(int i=2; i<=n; i++)
	{
		prime[i]=true;
	}
	for(int i=2; i<=sqrt(n); i++)
	{
	  if(prime[i]==true)
	  {
	  	for(int p=i*i; p<=n; p+=i)
	  	{
	  		prime[p]=false;
		  }
	  }
	}
	for(int i=2; i<=n; i++)
	{
		if(prime[i]==true)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int n; cin>>n;
	seive(n);
}
