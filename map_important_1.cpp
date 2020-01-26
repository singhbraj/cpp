#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        map<ll,ll>m1;
        map<ll,ll>m2;
        set<ll>s;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            m1[a[i]]++;
            m2[a[i]]++;
        }
        int max=INT_MIN;
        for(ll i=0; i<n; i++)
        {
            if(m1[a[i]]!=-1)
            {
                if(m1[a[i]]>max)
                {
                    max=m1[a[i]];
                }
            }
        }
         for(ll i=0; i<n; i++)
        {
            if(m2[a[i]]!=-1)
            {
                if(m2[a[i]]==max)
                {
                    s.insert(a[i]);
                }
            }
        }
        for(auto it=s.rbegin(); it!=s.rend(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}
