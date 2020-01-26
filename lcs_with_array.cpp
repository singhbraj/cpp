#include<bits/stdc++.h>
#define ll long long
using namespace std;
void lcs(ll a[], ll b[],ll n, ll m)
{
  ll dp[m+1][n+1];
  for(ll i=0; i<=m; i++)
  {
  	for(ll j=0; j<=n; j++)
  	{
  	  if(i==0 || j==0)
		{
		dp[i][j]=0;	
		}	
		else if(b[i-1]==a[j-1])
		{
			dp[i][j]=1+dp[i-1][j-1];
		}
		else
		{
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
  }
   for(ll i=0; i<=m; i++)
  {
  	for(ll j=0; j<=n; j++)
  	{
  	cout<<dp[i][j]<<" ";	
	}
	cout<<endl;
	int index=dp[m][n];
	int  Lcs[index+1]; 
   Lcs[index] = 0; // Set the terminating character 
  
   // Start from the right-most-bottom-most corner and 
   // one by one store characters in lcs[] 
   int i = m, j = n; 
   while (i > 0 && j > 0) 
   { 
     
      if (b[j-1] == a[i-1]) 
      { 
          Lcs[index-1] = b[j-1]; // Put current character in result 
          i--; j--; index--;     // reduce values of i, j and index 
      } 
  
      // If not same, then find the larger of two and 
      // go in the direction of larger value 
      else if (L[i-1][j] > L[i][j-1]) 
         i--; 
      else
         j--; 
   } 
  
   // Print the lcs 
   cout << "LCS of " << X << " and " << Y << " is " << lcs; 
} 
}
}
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[n];
	ll b[m];
	for(ll i=0;i<n; i++)
	{
		cin>>a[i];
	}
	for(ll j=0; j<m; j++)
	{
		cin>>b[j];
	}
	lcs(a,b,n,m);
	
}
