#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		set<char> st;
		for(ll i=0; i<s.length(); i++)
		{
			st.insert(s[i]);
		}
		if(st.size()<3)
		{
			cout<<"Dynamic"<<endl;
			//continue;
		}
		else
		{
		vector<ll> v;
		ll x;
		for(auto i:st){
		    x=std::count(s.begin(),s.end(),i);
		    v.push_back(x);
		}
	   sort(v.begin(),v.end());
	   bool flag=true;
	 	for(ll i=2; i<v.size(); i++)
	 	{
	 		if(v[i]!=(v[i-1]+v[i-2]))
	 		{
	 		  flag=false;
	 		  break;
			 }
		 }
		 if(flag)
		 {
		 	cout<<"Dynamic"<<endl;
		 }
		 else
		 cout<<"Not"<<endl;
	 }
	}
}
