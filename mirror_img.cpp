#include<bits/stdc++.h>
using namespace std;
string reverseStr(string& s)
{
    int n=s.length();
    for(int i=0; i<n/2; i++)
    swap(s[i],s[n-i-1]);
return s;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s2=s;
        int n=s.length();
        string s1=reverseStr(s);
        int o=0;
        int z=0;
        int e=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                o++;
            }
            else if(s[i]=='0')
            {
                z++;
            }
            else if(s[i]=='8')
            {
                e++;
            }
        }
        if(o+z+e==n && s1==s2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
