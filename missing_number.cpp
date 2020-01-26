#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{int t; cin>>t;
while(t--)
{
	int n; cin>>n;
	while(n--)
	{ int b; cin>>b;
	  string s; cin>>s;
	  ll x=0;
	  if(b!=-1)
	  {  int l=s.length()-1;
        for(int i=0; i<s.length(); i++)
		{   if(s[i]>='A' && s[i]<='Z')
		      {
		      	s[i]=s[i]-55;
		      	x+=int(s[i])*pow(b,l);
		      	l=l-1;
			  }
			  else
			  { 
			  x+=(s[i]-'0')*pow(b,l);
			   l=l-1;
		     }
		}
		cout<<x<<endl;	  	
	  }	  
		
	}
}
	
}
