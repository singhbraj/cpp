#include<bits/stdc++.h>
using namespace std;
int fun(int n, int k)
{
	int C[n + 1][k + 1]; 
    int i, j; 
  
    // Caculate value of Binomial Coefficient 
    // in bottom up manner 
    for (i = 0; i <= n; i++) 
    { 
        for (j = 0; j <= min(i, k); j++) 
        { 
            // Base Cases 
            if (j == 0 || j == i) 
                C[i][j] = 1; 
  
            // Calculate value using previously 
            // stored values 
            else
                C[i][j] = C[i - 1][j - 1] + 
                          C[i - 1][j]; 
        } 
    } 
  
    return C[n][k];
}
int min(int a, int b) 
{ 
    return (a < b) ? a : b; 
} 
int main()
{
	int n; cin>>n;
	int k; cin>>k;
	cout<<fun(n,k)<<endl;
}
