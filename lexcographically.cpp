#include<bits/stdc++.h> 
using namespace std ;  
void minimizeWithKSwaps(int arr[], int n, int k) 
{ 
	for (int i = 0; i<n-1 && k>0; ++i) 
	{ 
		
		int pos = i; 
		for (int j = i+1; j<n ; ++j) 
		{ 
		 
			if (j-i > k) 
				break; 

	
			if (arr[j] < arr[pos]) 
				pos = j; 
		} 

		
		for (int j = pos; j>i; --j) 
			swap(arr[j], arr[j-1]); 

	
		k -= pos-i; 
	} 
} 


int main() 
{ 

 int t; cin>>t;
 while(t--)
 {
 	int n,k;
 	cin>>n>>k;
 	int a[n];
 	for(int i=0; i<n; i++)
 	cin>>a[i];
	minimizeWithKSwaps(a, n, k); 
	for (int i=0; i<n; ++i) 
		cout << a[i] <<" "; 
		cout<<endl;
}
}

