#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll power(ll b, ll p)
{
    if(p==0)
	return 1;
	else if(p%2==0)
	return power(b,p/2)*power(b,p/2);
	else
	return b*power(b,p/2)*power(b,p/2);
}
int main()
{
	ll b; cin>>b;
	ll n; cin>>n;
	cout<<power(b,n)<<endl;
	
}
