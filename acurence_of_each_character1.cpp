#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		set<char> st;
		for(int i=0; i<s.length(); i++)
		{
			st.insert(s[i]);
		}
		if(st.size()<3)
		{
			cout<<"Dynamic"<<endl;
			continue;
		}
		else
		{
		
		int a[26];
		vector<int> v;
		memset(a,0,sizeof(a));
		for(int i=0; i<s.length(); i++)
		{
			a[s[i]-'a']++;
		}
	   for(int i=0; i<26; i++)
	   {
	   	if(a[i]!=0)
	   	{
	   	  v.push_back(a[i]);	
		}
	   }
	   sort(v.begin(),v.end());
	   bool flag1=true;
	   bool flag2=true;
	 	for(int i=2; i<v.size(); i++)
	 	{
	 		if(v[i]!=v[i-1]+v[i-2])
	 		{
	 		  flag1=false;
	 		  break;
			 }
		 }
		  swap(v[0],v[1]);
        for(int i=2;i<v.size();i++){
            if(v[i]!=(v[i-1]+v[i-2])){
                flag2=false;
                break;
            }
        }
		 if(flag1||flag2)
		 {
		 	cout<<"Dynamic"<<endl;
		 }
		 else
		 cout<<"Not"<<endl;
	 }
	}
}
