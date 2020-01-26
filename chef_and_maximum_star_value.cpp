#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t; cin>>t;
	while(t--)
	{
      ll n; cin>>n;
      ll a[n];
      vector<ll>loc(1000000);
      vector<ll>v2(1000000);
      for(ll i=0; i<n; i++)
      {
      	cin>>a[i];
      	loc[a[i]]=i;
      	v2[a[i]]=0;
	  }
	  for(ll i=0; i<n; i++)
	  {  for (int j=1; j<=sqrt(a[i]); j++) 
	       { 
		    if (a[i]%j == 0) 
		   { 
		     	if (a[i]/j == j) 
		     	{  //cout<<"Braj"<<endl;
			    	if(loc[j]>i)
			    	{
					  v2[j]++;
				   } 
			   }
			  
			else 
				{ 
			
				if(loc[j]>i)
				{
					v2[j]++;
				
				 }  
				if(loc[a[i]/j]>i)
				{
					v2[a[i]/j]++;
				 } 
				}
	     	} 
	      }    
	  }
	  /*for(ll i=0; i<n; i++)
	  {
	  	cout<<v2[a[i]]<<" ";
	  }*/
	  ll max=0;
	    for(ll i=0; i<n; i++)
	    {
	    	if(v2[a[i]]>max)
	    	{
	    	max=v2[a[i]];	
			}
		}
		cout<<max<<endl;
	 
	}
}
