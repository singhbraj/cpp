#include<bits/stdc++.h>
using namespace std;
int main()
{  int t; cin>>t;
while(t--)
{

	string s;
	cin>>s;
	map<char,bool> m;
	for(int i=0;i<s.size();i++)
	m[s[i]]=0;
	for(int i=0;i<s.size();i++)
	 if(m[s[i]]==0){
	 	m[s[i]]=1;
	 	cout<<s[i];
	 }
	 cout<<"\n";
}
}
