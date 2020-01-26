#include<bits/stdc++.h>
using namespace std;
int a[128];
void fun( )
{   

    a[0]=0;
    a[1]=0;
    //a[2]=0;
    int k,l;
    for(int i=1; i<=128; i++)
    {     
     int x=a[i];
     l=i;
     bool flag=false;
     for(int j=i-1; j>0; j--)
     {
     	if(x==a[j])
     	{
     		k=j;
     		flag=true;
     		break;
		}
		else
		{
			continue;
		}
	 }
	 if(flag)
	 {
	 	a[i+1]=l-k;
	 }
	 else
	 a[i+1]=0;
	}
/*for(int i=1; i<=n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;*/
	//cout<<a[n]<<endl;
	/*int count=0;
	int y=a[n];
	for(int i=1; i<=n; i++)
	{
		if(a[i]==y)
		{
			count++;
		}
	}
	cout<<count<<endl;*/
}
int main()
{    fun();
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
	    int y=a[n];
	    int count=0;
	    for(int i=1; i<=n; i++)
	    {
	    	if(a[i]==y)
	    	{
	    		count++;
			}
		}
		cout<<count<<endl;
	}
}
