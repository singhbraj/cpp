 #include <bits/stdc++.h> 
using namespace std; 

void SieveOfEratosthenes(int n, bool prime[], bool primesquare[], int a[]) 
{ 

	for (int i = 2; i <= n; i++) 
		prime[i] = true; 

	for (int i = 0; i <= (n * n + 1); i++) 
		primesquare[i] = false; 

	prime[1] = false; 

	for (int p = 2; p * p <= n; p++) { 
		// If prime[p] is not changed, then 
		// it is a prime 
		if (prime[p] == true) { 
			// Update all multiples of p 
			for (int i = p * 2; i <= n; i += p) 
				prime[i] = false; 
		} 
	} 

	int j = 0; 
	for (int p = 2; p <= n; p++) { 
		if (prime[p]) { 
			// Storing primes in an array 
			a[j] = p; 

			// Update value in primesquare[p*p], 
			// if p is prime. 
			primesquare[p * p] = true; 
			j++; 
		} 
	} 
} 

// Function to count divisors 
int countDivisors(int n) 
{ 
	// If number is 1, then it will have only 1 
	// as a factor. So, total factors will be 1. 
	if (n == 1) 
		return 1; 

	bool prime[n + 1], primesquare[n * n + 1]; 

	int a[n]; // for storing primes upto n 

	// Calling SieveOfEratosthenes to store prime 
	// factors of n and to store square of prime 
	// factors of n 
	SieveOfEratosthenes(n, prime, primesquare, a); 

	// ans will contain total number of distinct 
	// divisors 
	int ans = 1; 

	// Loop for counting factors of n 
	for (int i = 0;; i++) { 
		// a[i] is not less than cube root n 
		if (a[i] * a[i] * a[i] > n) 
			break; 

		// Calculating power of a[i] in n. 
		int cnt = 1; // cnt is power of prime a[i] in n. 
		while (n % a[i] == 0) // if a[i] is a factor of n 
		{ 
			n = n / a[i]; 
			cnt = cnt + 1; // incrementing power 
		} 

		// Calculating number of divisors 
		// If n = a^p * b^q then total divisors of n 
		// are (p+1)*(q+1) 
		ans = ans * cnt; 
	} 

	// if a[i] is greater than cube root of n 

	// First case 
	if (prime[n]) 
		ans = ans * 2; 

	// Second case 
	else if (primesquare[n]) 
		ans = ans * 3; 

	// Third casse 
	else if (n != 1) 
		ans = ans * 4; 

	return ans; // Total divisors 
} 

// Driver Program 
int main() 
{ 
	cout << "Total distinct divisors of 100 are : "
		<< countDivisors(100) << endl; 
	return 0; 
} 

