
#include<bits/stdc++.h>
using namespace std;
const int N=1e8;
vector<char> is_Prime(N+1,true);
vector<int>primes;

int main()
{
	is_Prime[0]=is_Prime[1]=false;
	
	for(int i=2;i*i<=N;i++)
	{
		if(is_Prime[i])
		{
			for(int j=i*i;j<=N;j+=i)
			{
				is_Prime[j]=false;
			}
		}
	}
	
	for(int i=2;i<=N;i++)
	{
		if(is_Prime[i])
			primes.push_back(i);
	}
		for(int i=00;i<primes.size();i+=100)
	{
		cout<<primes[i]<<endl;
	}
	return 0;
}
