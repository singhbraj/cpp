#include<bits/stdc++.h>
using namespace std;
int fun(int n, int r)
{
	if(n==r || r==0)
	return 1;
	return fun(n-1,r-1)+fun(n-1,r);
}
int main()
{
	int n; cin>>n;
	int k; cin>>k;
	cout<<fun(n,k)<<endl;
}
