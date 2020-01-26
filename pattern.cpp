
#include <bits/stdc++.h> 
using namespace std; 
bool prime[100000]; 
void SieveOfEratosthenes() 
{ 
     int n=100000;

	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 
	
		if (prime[p] == true) 
		{ 
			for (int i=p*p; i<=n; i += p) 
				prime[i] = false; 
		} 
	}  
} 

int main() 
{ 
	SieveOfEratosthenes();prime[1]=false;
    int a,b;
	
	 while(cin>>a&& cin>>b)
	 {
	 	int sum=0;
	 	for(int i=a;i<=b;i++)
	 	{
	 		if(prime[i]==true)
	 		sum+=i;
		}
		cout<<sum<<endl; 
    }	 
	return 0; 
} 

