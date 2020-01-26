#include<bits/stdc++.h>
using namespace std;
int coinchange(int s[], int m, int n) // m=Number of coins and n=how much sum we want
{
	int table[n+1][m];
	for(int i=0; i<m; i++)
	table[0][i]=1;
	for(int i=1; i<n+1; i++)
	{
		for(int j=0; j<m; j++)
		{
			int x=(i-s[j]>=0)?table[i-s[j]][j]:0;
			int y=(j>=1)?table[i][j-1]:0;
			table[i][j]=x+y;
		}
	}
	return table[n][m-1];
}
int main()
{
	int n; cin>>n;
	int c[n];
	for(int i=0; i<n; i++) cin>>c[i];
	int sum; cin>>sum;
	cout<<coinchange(c,n,sum)<<endl;
}
