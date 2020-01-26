// lower_bound and upper_bound in vector 
#include <iostream> 
#include <algorithm> // for lower_bound, upper_bound and sort 
#include <vector>	 // for vector 

using namespace std; 

int main () 
{ 
	int a[] = {1,2,3,5,6}; 
	
	//vector<int> v(gfg,gfg+8); // 5 6 7 7 6 5 5 6 

//	sort (v.begin(), v.end()); // 5 5 5 6 6 6 7 7 

	//vector<int>::iterator lower,upper; 
	int lower = lower_bound (a,a+5, 4); 
	//upper = upper_bound (v.begin(), v.end(), 6); 

	cout << "lower_bound for 6 at position " << (lower-a[0]) << '\n'; 
	//cout << "upper_bound for 6 at position " << (upper - v.begin()) << '\n'; 

	return 0; 
} 

