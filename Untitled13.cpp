#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void fun(ll a[], ll n, ll x)
{
    for(ll i=0; i<n; i++)
    {
        if(a[i]>x)
        {
            a[i]=a[i]-1;
        }
    }
}
int main()
{
    ll n; cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    cin>>a[i];
    ll m; cin>>m;
    while(m--)
    {
        ll x; cin>>x;
        fun(a,n,x);
    }
    for(ll i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    

}
