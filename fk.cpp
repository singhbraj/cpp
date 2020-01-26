#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
int main()
{
	int n; //cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	set<char> se;
	se.insert(all(s1));
	se.insert(all(s2));
	map<char,int> mp;
	for(auto i:se){
		cout<<i<<"\n";
		int x=0;
		 x=count(all(s1),i);
		if(x>0)
		 mp[i]++;
		 x=0;
		x=count(all(s2),i);
		if(x>0)
		 mp[i]++;
		 
	}
	for(auto i:mp){
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	
	
}
