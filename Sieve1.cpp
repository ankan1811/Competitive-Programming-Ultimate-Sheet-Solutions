#include<bits/stdc++.h>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;
vector<int> primes;
int prime[100001];
 
void sieve(int maxN)
{
	vector<int> ar(maxN + 1 , 0);
	ar[1] = 1;
	
	for(int i=2;i<=maxN;i++)
	if(ar[i] == 0)
	{
		for(int j=2*i;j<=maxN;j+=i)
		ar[j] = 1;
	}
	
	for (int i = 1; i <=maxN; i++)
	if(ar[i] == 0)
	primes.push_back(i);
}
 
void init(int L , int R)
{
	if(L == 1) L++;
	
	int maxN = R - L + 1;
	vector<int> ar(maxN , 0);
	
	for(lli p : primes)
	if(p*p <= R)
	{
		int i = (L / p) * p;
		if(i < L) i += p;
		
		for(;i<=R;i+=p)
		{
			if(i != p)
			ar[i-L] = 1;
		}
	}
	
	for(int i=0;i<maxN;i++)
	if(ar[i] == 0)
	cout<<L + i<<endl;
}
 
int main()
{
	sieve(100000);
	int t , L , R;
	cin>>t;
	
	while(t--)
	{
		cin>>L>>R;
		init(L , R);
		cout<<endl;
	}
}
