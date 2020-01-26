 
#include <bits/stdc++.h> 
using namespace std; 

int countFreq(int arr[], int n) 
{ 
	unordered_map<int, int> mp; 

	
	for (int i = 0; i < n; i++) 
		mp[arr[i]]++; 


	int count=INT_MIN;
	for (int i = 0; i < n; i++) { 
	if (mp[arr[i]] != -1) 
	{ 
	 if(mp[arr[i]]>count)
	 {
	 	count=mp[arr[i]];
	  } 
		 
	} 
	} 
	return count;
} 

int main() 
{ 
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
	
	  int r=countFreq(a, n);
	  if(r==1)
	  {
	  	cout<<n-1<<endl;
	   } 
	   else
	   cout<<n-r<<endl;
     
}
	return 0; 
} 

