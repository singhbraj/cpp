#include<bits/stdc++.h>
using namespace std;
#define max 10000
bool has[max+1][2];
bool search(int x)
{
	if(x>0)
	{
		if(has[x][0]==1)
		{
			return true;
		}
		else
		false;
	}
	else
	{
		int X=abs(x);
		if(has[X][1]==1)
		{
			return true;
		}
		else
		return false;
	}
}
void insert(int a[], int n)
{
	for(int i=0; i<n;i++)
	{
		if(a[i]>0)
		{
			has[a[i]][0]=1;
		}
		else
		has[abs(a[i])][1]=1;
	}
}
int main()
{
	int n; cin>>n; 
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	insert(a,n);
	int x; cin>>x;
	if(search(x)==true)
	{
		cout<<"Number is present in hash:"<<endl;
	}
	else
	cout<<"Number is not present in hash"<<endl;
}
