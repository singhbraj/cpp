#include<bits/stdc++.h>
using namespace std;
#define max 100001
int factor[max];
void seive()
{
	factor[1]=1;
	for(int i=2; i<max; i++)
	{
		factor[i]=i;
	}
	for(int i=4; i<max; i+=2)
	{
		factor[i]=2;
	}
	for(int i=3; i<=sqrt(max); i++)
	{
	if(factor[i]==i)
	{
		for(int j=i*i; j<max; j+=i)
		{
			if(factor[j]==j)
			{
				factor[j]=i;
			}
		}
	}
	}
}
int main()
{   seive();
	int n; cin>>n;
	//int m=factor[n];
	int m=factor[n];
	int c=1;
	int ans=1;
	int j=n/factor[n];
	while(j!=1)
	{
		if(factor[j]==m)
		{
			c++;
		}
		else
		{
			m=factor[j];
			ans*=(c+1);
			c=1;
		}
		j=j/factor[j];
	}
	ans*=(c+1);
	cout<<ans<<endl;
	
	
}
