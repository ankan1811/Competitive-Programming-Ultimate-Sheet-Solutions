/*A prime number is a positive number, which is divisible by exactly two different integers. A digit prime
is a prime number whose sum of digits is also prime. For example the prime number 41 is a digit prime
because 4 + 1 = 5 and 5 is a prime number. 17 is not a digit prime because 1 + 7 = 8, and 8 is not
a prime number. In this problem your job is to find out the number of digit primes within a certain
range less than 1000000.

Input
First line of the input file contains a single integer N (0 < N = 500000) that indicates the total number
of inputs. Each of the next N lines contains two integers t1 and t2 (0 < t1 = t2 < 1000000).
(t1 excluded and t2 inculded)
Output
For each line of input except the first line produce one line of output containing a single integer that
indicates the number of digit primes between t1 and t2 (inclusive).
*/


//this solution is accepted
#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000

bool prime[MAX + 1];
int dPrime[MAX + 1];

int dSum(int N) {//sum of digits
	int T = 0;
	while (N) {
		T += (N % 10);
		N /= 10;
	}
	return T;
}

void seive() {
	long long i, j;
	for (i = 0; i <= MAX; i++) {
		prime[i]  = true;
		dPrime[i] = 0;
	}
	prime[0] = false;
	prime[1] = false;
	for (i = 2; i <= MAX; i++) {
		dPrime[i] = dPrime[i - 1];
		if (prime[i]) {
			if (prime[dSum(i)])//if sum of digits of the number is prime(prime[sumofdigits]==true)
			 ++dPrime[i];
			for (j = i * i; j <= MAX; j += i)
				prime[j] = false;
		}
	}
}

int main(){
	//freopen("testI.txt", "r", stdin);
	//freopen("testO.txt", "w", stdout);
	seive();
	int N;
	int A, B;
	cin>>N;
	while (N--) {
		cin>>A>>B;
		cout<<(dPrime[B] - dPrime[A - 1])<<endl;//check t1 excluded and t2 included
	}
	return 0;
}
