#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n, int l, int r, int k)
{ 
	a[l]+=k;
	if(r+1==n)
	{
		return;
	}
	else
	a[r+1]-=k;
}
int main()
{
	int n; cin>>n;
	int q; cin>>q;
	int a[n];
	int b[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	
	while(q--)
	{
		int l,r,k;
		cin>>l>>r>>k;
		fun(a,n,l,r,k);
	}

	for(int i=1; i<n; i++)
	{
		a[i]=a[i]+a[i-1]-b[i-1];
	
	}
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	

	
}
