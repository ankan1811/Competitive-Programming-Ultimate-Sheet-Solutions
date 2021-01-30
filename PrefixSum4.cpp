/*You just need to increment 1 at max(0, (xi – ri))
 and decrement 1 at min(p + 1, xi + ri + 1).
  Now traverse the array from left to right and calculate the array with prefix sums.
Now, the answer can easily be calculated by finding out the longest subarray
 with elements not equal to 1.
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 3e5 + 5;
ll a[N];
int main()
{
    ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, p;
    cin >> n >> p;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        //check the ss in phone
        a[max(0, x - y)]++;//Scanline algorithm
        a[min(p + 1, x + y + 1)]--;
    }
    for(int i = 1; i <= p; i++) a[i] += a[i - 1];//Scanline algo
    
    int ans = 0, cnt = 0;
    for(int i = 0; i <= p; i++){
        if(a[i] != 1) 
			cnt++;
        else 
			ans = max(ans, cnt), cnt = 0;
    }
    cout << max(ans, cnt);
return 0;
}
