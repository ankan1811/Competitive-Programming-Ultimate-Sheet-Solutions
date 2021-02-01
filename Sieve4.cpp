/*Given a prime number X, 
you need to give the count of all numbers in range 1 to 10^6 inclusive 
which have minimum prime factor X.
*/

// C++ implementation of above approach 
#include <bits/stdc++.h> 
using namespace std; 
#define MAX 1000000 
#define lli long long int

// the sieve of prime number and 
// count of minimum prime factor 
int sieve_Prime[MAX + 4] = { 0 }, 
					sieve_count[MAX + 4] = { 0 }; 

// form the prime sieve 
void form_sieve() 
{ 
	// 1 is not a prime number 
	sieve_Prime[1] = 1; 

	// form the sieve 
	for (int i = 2; i <= MAX; i++) { 

		// if i is prime 
		if (sieve_Prime[i] == 0) { 
			for (int j = i * 2; j <= MAX; j += i) { 

				// if i is the least prime factor 
				if (sieve_Prime[j] == 0) { 

					// mark the number j as non prime 
					sieve_Prime[j] = 1; 

					// count the numbers whose least prime factor is i 
					sieve_count[i]++; 
				} 
			} 
		} 
	} 
} 

// Driver code 
int main() 
{ 
	// form the sieve 
	form_sieve(); 
	lli t;
	cin>>t;
	while(t--)
	{
	lli n;
	cin>>n;
	cout<< (sieve_count[n] + 1) << endl; 
}
	return 0; 
} 

