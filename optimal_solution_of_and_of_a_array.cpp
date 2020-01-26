#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100000
#define bc 32
ll rob[bc][MAX]; 
void fb(ll arr[],ll n) 
{ 
  
    for(ll i=0;i<bc;i++) { 
        rob[i][0] =((arr[0]>>i)&1); 
        for(ll j=1;j<n;j++){ 
            rob[i][j]=((arr[j]>>i)&1); 
            rob[i][j]+=rob[i][j-1]; 
        } 
    } 
} 
ll rangeAnd(ll l,ll r) 
{ ll ans=0; 
    for (ll i=0;i<bc;i++) { 
        ll x; 
        if(l==0) 
            x=rob[i][r]; 
        else
            x=rob[i][r]-rob[i][l-1]; 
  
        if(x==r-l+1) 
            ans=(ans|(1<< i)); } 
    return ans; 
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
	
    ll n;
    cin>>n;
    ll v[n];
    for(ll i=0;i<n;i++)
     cin>>v[i];
    fb(v, n);
	ll q;
	cin>>q;
	ll x,y;
	while(q--){
		cin>>x>>y;
		x--;
		y--;
		ll as=rangeAnd(x,y);
		if(as%2==0)
		cout<<"EVEN"<<endl;
		else cout<<"ODD"<<endl;
	}
}
	return 0; 
}
