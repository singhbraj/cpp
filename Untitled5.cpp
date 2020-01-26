#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int max=INT_MIN;
		while(n--)
		{
			int s,p,v;
			cin>>s>>p>>v;
		
				int r=p/s;
			
			int re=r*v;
			int res=re-v;
	         if(res<0)
	         res=0;
			if(res>max)
			{
				max=res;
			}
		  }
		 
	  
	
	cout<<max<<endl;
}
}
