#include<bits/stdc++.h>
using namespace std;

class fac{
	public:
		int fun(int n)
		{
		int dp[n];
		dp[0]=1;
		dp[1]=1;
		for(int i=2; i<n; i++)
		{
			dp[i]=dp[i-1]+dp[i-2];
		}
		return dp[n];
		}
};
int main()
{
	int t; cin>>t;
	while(t--)
	{
		fac o;
		int n; cin>>n;
		cout<<o.fun(n);
	}
}
