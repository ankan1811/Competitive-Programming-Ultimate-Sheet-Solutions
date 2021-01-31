/*
The approach here is to calculate the sum of the first k planks: h1+h2+...+hk.
  By subtracting h1 and adding hk+1 we get sum of k planks starting from the second plank.
   Then, by subtracting h2 and
  adding hk+2 we get sum of k planks starting from the third plank, and so on.
  */
  #include<bits/stdc++.h>
#include <iostream>
#include<cmath>
# define lli long long int
using namespace std;
//check the input range (10^100)
    void solve()
	{
  int n,k;
  cin>>n>>k;
  int arr[n];
  int sum=100000000;
  for(int i=0;i<n;i++)
  	cin>>arr[i];
  
  int newsum=0;
  for(int i=0;i<k;i++)
  {
    newsum=newsum+arr[i];
  }
  if(newsum<sum)
    sum=newsum;
    int index=1;
    for(int i=1;i<=n-k;i++)
    {
      newsum=newsum-arr[i-1]+arr[i+k-1];//newsum must be minimal
      if(newsum<sum)
      {
	  sum=newsum;
        index=i+1;//We have to prnt the starting index.0 based indexing
      }
 
    }
    cout<<index<<endl;
}

	

	
		
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	int test;
//	cin>>test;
//	while(test--)
	
            //    cout<<"Case #"<<i<<": ";
                solve();
	
		
	return 0;
}
