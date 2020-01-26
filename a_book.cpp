#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t; while(t--)
	{
		int n; cin>>n;
		int a[n];
		set<int> s;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			s.insert(a[i]);
		}
		int b[n];
		if(s.size()==n)
		{  for(int i=0; i<n; i++)
		{
		
			b[i]=n-i-1;
		}
     	}
     
    else
    {   int count=0;
    	for(int i=0; i<n; i++)
    	{
    		for(int j=i+1; j<n; j++)
    		{
    			if(a[j]>a[i])
    			{
    				count++;
				}
			}
			b[i]=count;
			count=0;
		}
	}
		for(int i=0; i<n; i++)
     	{
     		cout<<b[i]<<" ";
		 }
		 cout<<endl;
	}
}
