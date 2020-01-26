#include<bits/stdc++.h>
using namespace std;
#define max 1000001
int factor[max];
void calculateprimefactor()
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
int countfactor(int n)
{    if(n==1)
return 1;
	int m=factor[n];
	int c=1;
	int ans=1;
	int j=n/factor[n];
	while(j!=1)
	{
	   if(factor[j]==m)
	   c+=1;
	   else
	   {
	   	 m=factor[j];
	   	  ans=ans*(c+1);
	   	  c=1;
	   }
	   j=j/factor[j];
	}
	ans=ans*(c+1);
	return ans;
}
int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	calculateprimefactor();
	int b[n];
	for(int i=0; i<n; i++)
	{
		b[i]=countfactor(a[i]);
	}
	for(int i=0; i<n; i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
