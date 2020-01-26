#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int s, int e)
{
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	int temp[100];
	while(i<=mid && j<=e)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
		k++;
		i++;
	}
	while(j<=e)
	{temp[k]=a[j];
	k++;
	j++;
	}
	for(int i=s; i<=e; i++)
	{
		a[i]=temp[i];
	}
}
void mergeSort(int a[], int s, int e)
{   if(s<e)
{
	int mid=(s+e)/2;
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);
   merge(a,s,e);
}
}
void print(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
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
	mergeSort(a,0,n-1);
	print(a,n);
}
