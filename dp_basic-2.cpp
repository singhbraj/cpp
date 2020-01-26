#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cin>>a[i][j];
			}
		}
		int dp[n+1][m+1];

		for(int i = 0; i <= n; i++){
			for(int j = 0; j <= m; j++){
				if(i == 0 || j == 0){
					dp[i][j] = 0;
				}
				else{
					dp[i][j] = max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]}) + a[i-1][j-1];
				}
			}
		}
		cout << dp[n][m] << endl;
	}
}
