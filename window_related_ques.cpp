#include<bits/stdc++.h>
using namespace std;
void fun(int a[], int n, int s, int m)
{
	int sum=0;
	int count=0;
	for(int i=0; i<m; i++)
	{
		sum+=a[i];
	}
	if(sum==s)
	{
		count++;
	}
	for(int i=0; i<n-m; i++)
	{
	 sum=sum-a[i]+a[i+m];
	 if(sum==s)
	 {
	 	count++;
		 }	
	}
	cout<<count<<endl;
}
using namespace std;
int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	cin>>a[i];
	int s,m;
	cin>>s>>m;
   fun(a,n,s,m);
	
}
