#include <iostream>

using namespace std;
#define lli long long int
bool ispowerof2(lli n)
{
	return(n&& !(n&n-1));
}
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
  //  int tt;
 //   cin >> tt;
   // while (tt--) {
        lli n,x;
        cin >> n;
        int c=0;
        for(int i=0;i<n;i++)
        {
        	cin>>x;
         if(ispowerof2(x))
		 	c++;	
		}
		cout<<c<<endl;
        
  //  }
    return 0;
}

