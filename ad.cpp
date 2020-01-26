#include<bits/stdc++.h>
using namespace std;
//#define max 1000000
void merge(int a[], int s, int e)
{
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	int t[100000];
	while(i<=mid && j<=e)
	{
		if(a[i]<a[j])
		{
			t[k]=a[i];
			i++;
			k++;
		}
		else
		{
			t[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		
		
			t[k]=a[i];
			i++;
			k++;
		
	}
		while(j<=e)
		{
			t[k]=a[j];
			j++;
			k++;
		}
		
		for(int i=s; i<=e; i++)
		{
			a[i]=t[i];
		}
	
	
}
void merge_sort(int a[], int s, int e)
{
	if(s<e)
	{
		int mid=(s+e)/2;
		merge_sort(a,s,mid);
		merge_sort(a,mid+1,e);
		merge(a,s,e);
	}
}

int main()
{
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
	    merge_sort(a,0,n-1);
	    //print(a,n);
		cout<<a[0]<<endl;
	}
}
