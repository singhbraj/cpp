#include<bits/stdc++.h>
using namespace std;
//#define max 1000000
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int a[n][n];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			cin>>a[i][j];
		}
		 int max_trace = 0; 
		 int trace;
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    	{
    		int r=i;
    		int c=j;
    		trace=0;
    		while(r<n && c<n)
    		{
    			trace+=a[r][c];
    			r++;
    			c++;
    			max_trace=max(trace,max_trace);
			}
		}
	}
    
    cout<<max_trace<<endl;
  
	}
}
