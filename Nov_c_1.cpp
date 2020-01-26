#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[10];
		memset(a,0,sizeof(a));
	   while(n--)
	   {
	   	string s;
	   	cin>>s;
	   	for(int i=0; i<10; i++)
	   	{
	   		if(s[i]=='1')
	   		{
	   			a[i]++;
			   }
		   }
	   }
		int count=0;
		for(int i=0; i<10; i++)
		{
			if(a[i]%2!=0)
			{
				count++;
			}
		}
		cout<<count<<endl;
		
	}
}
