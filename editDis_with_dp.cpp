#include<bits/stdc++.h>
using namespace std;
int min(int a, int b, int c)
{
	return min(min(a,b),c);
}
int editDis(string s1, string s2, int m, int n)
{
 	int dp[m+1][n+1];
 	for(int i=0; i<=m; i++)
 	{
 		for(int j=0; j<=n; j++)
 		{
 			if(i==0)
 			{
 			  dp[i][j]=j;	
			}
			else if(j==0)
			{
				dp[i][j]=i;
			}
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]=dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=1+min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);
			}
		 }
	 }
	 for(int i=0; i<=m; i++)
	 {
	 	for(int j=0; j<=n; j++)
	 	{
	 	 cout<<dp[i][j]<<" ";	
		}
		cout<<endl;
	 }
 	return dp[m][n];
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int m=s1.length();
	int n=s2.length();
	cout<<editDis(s1,s2,m,n);
}
