#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int min_ind;
	for(int i=0; i<n-1; i++)
	{
		min_ind=i;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]<a[min_ind])
			{
				min_ind=j;
			}
			
		}
		swap(a[i], a[min_ind]);
	}

}

