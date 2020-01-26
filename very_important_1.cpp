#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
	string s; cin>>s;
	int n=s.size();
	int len=0;
	for(int i=0; i<n; i++)
	{
		int w=1;
		while(s[i]==s[i+1])
		{
			i++;
			w++;
		}
		if(w<10)
		{
			len+=2;
		}
		else if(w<100)
		{
			len+=3;
		}
		else if(w<1000)
		{
			len+=4;
		}
		else if(w<100000)
		{
			len+=5;
		}
	}
	
	
	if(len<n)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
}
}
