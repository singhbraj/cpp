#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		int x;
		int ans = 0;
		unordered_map<string,pair<int,int>> m;
		for(int i=0;i<n;++i)
		{
			cin>>str>>x;
			if(x)
				++m[str].second;
			else
				++m[str].first;
		}
		for(auto i:m)
			ans += max(i.second.first,i.second.second);
		cout<<ans<<"\n";
	}
}

