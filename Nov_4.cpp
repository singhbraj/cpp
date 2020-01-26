#include<bits/stdc++.h>
using namespace std;
#define all(p) p.begin(),p.end()
#define ll long long int
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t; cin>>t;
	while(t--)
	{
		int n,x,y; cin>>n;
		vector<string>a;
		vector<string>b;
		set<char>se1;
		set<char>se2;
		while(n--)
		{
			string s;
			cin>>s;
			x=y=0;
			for(auto i:s){
				if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
		           	x++;
		        else y++;
		}
	
			if(x>=y)
			{
				a.push_back(s);
				se1.insert(all(s));
			}
			else{
			b.push_back(s);
			se2.insert(all(s));}
		}    
	  ll w=a.size();
      ll q=b.size();
		map<char,ll> mp1;
		map<char,ll> mp2;
	
	for(auto i:se1){

	for(int j=0; j<a.size(); j++)
	{
		int x=0;
		x=count(all(a[j]),i);
		if(x>0)
		{
			mp1[i]++;
			mp2[i]=mp2[i]+x;
	        
		}
	}
		 
	}
	  
	map<char,ll> mp3;
	map<char,ll> mp4;
	for(auto i:se2){
	for(int j=0; j<b.size(); j++)
	{
		int x=0;
		x=count(all(b[j]),i);
		if(x>0)
		{
			mp3[i]++;
		
			mp4[i]=mp4[i]+x;
			
		}
	}
	
}  	

ll m1=1,m2=1;
	  ll m3=1,m4=1;
     for(auto i:mp1){
		m1*=i.second;}
	for(auto i:mp2){
		m2*=pow(i.second,w);}	
    for(auto i:mp3){
		m3*=i.second;}
	for(auto i:mp4){
		m4*=pow(i.second,q);}
		
		double r1=m1*m4;
		double r2=m2*m3;
		double res=r1/r2;
	double result=roundf(res*10000000)/10000000;
		printf("%.7f \n",result);
		//cout<<std::setprecision(6)<<res<<endl;
	
}
}
