#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n, int l, int r, int k)
{ 
	a[l]+=k;
	if(r==n-1)
	{
		return;
	}
	else#define SIZE_INT sizeof(int)
#define INT_BIT SIZE_INT*8-1
int main() {
    
    int b;
    scanf("%d",&b);
   while(b--)
   {unsigned int num,rot=2147483649,rot1,n1;
   
	scanf("%d",&num);
	 n1=num;
	 rot1=num;
	 
	while(rot!=n1)
	{	
	   int rep=(num>>INT_BIT)&1;
	   
	   num=(num<<1)|rep;
	   if(rot1<num)
	   {
	       rot1=num;
	   }
	   rot=num;
	   
	}
	printf("%u \n",rot1);
   }
	return 0;
}
	a[r+1]-=k;
}
int main()
{ int t; cin>>t;
while(t--)
{

	int n; cin>>n;
	int q; cin>>q;
	int a[n+1];
	int b[n+1];
	for(int i=1; i<=n; i++)
	{
		a[i]=i;
		b[i]=i;
	}
	
	while(q--)
	{
		int l,r,k;
		cin>>l>>r>>k;
		fun(a,n,l,r,k);
	}
     
	for(int i=2; i<=n; i++)
	{
		a[i]=a[i]+a[i-1]-b[i-1];
	
	}
	for(int i=1; i<=n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

	
}
