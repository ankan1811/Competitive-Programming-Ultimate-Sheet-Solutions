#include <bits/stdc++.h>
using namespace std;  
bool prime[1000005];
void SieveOfEratosthenes()  
{  
    memset(prime, true, sizeof(prime)); 
    prime[0] = false;
    prime[1] = false; 
    for (int i=2; i*i<1000005; i++)  
    {  
        if (prime[i] == true)  
        {    
            for (int j=i*i; j<1000005; j += i)  
                prime[j] = false;  
        }  
    }  
}  
int main()
{
    int t,n;
    cin>>t;
    SieveOfEratosthenes();    //do once
    while(t--)
    {
       cin>>n;
        for(int i=n,j=n;i>1||j<1000005;i--,j++)
        {  
            if(prime[i]) 
            {
                cout<<i; //Print the smaller prime number if present
                break;
            }
            else if(prime[j]) 
            {
                cout<<j; 
                break; 
            }
        }
        cout<<"\n";
    }
    return 0;
}
