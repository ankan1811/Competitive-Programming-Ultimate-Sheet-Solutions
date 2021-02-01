/*
In this problem your goal is to sort an array consisting of n integers in at most n swaps.
 For the given array find the sequence of swaps 
 that makes the array sorted in the non-descending order.
  Swaps are performed consecutively, one after another.
Note that in this problem you do not have to minimize the number of swaps — your task is to find any sequence that is no longer than n.
*/
  #include<bits/stdc++.h>
#include <iostream>
#include<cmath>
# define lli long long int
using namespace std;
//check the input range (10^100)
    void solve()
	{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	vector<pair<int, int> > ans;
	 for (int i = 0; i < n; i++)
    {
        int j = i;
        for (int k = i; k < n; k++)
            if (a[j] > a[k])
                j = k;

            ans.push_back(make_pair(i, j));
        swap(a[i], a[j]);
    }
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i].first << " " << ans[i].second << endl;
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


