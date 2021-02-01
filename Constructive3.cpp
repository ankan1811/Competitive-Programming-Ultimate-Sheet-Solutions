/*You have an array a consisting of n integers.
 Each integer from 1 to n appears exactly once in this array.

For some indices i (1 to n-1 both included) it is possible to swap i-th element with
 (i+1)-th, for other indices it is not possible.
  You may perform any number of swapping operations any order.
   There is no limit on the number of times you swap i-th element with (i+1)-th
    (if the position is not forbidden).
Can you make this array sorted in ascending order
 performing some sequence of swapping operations?*/
 
 
  
#define MAX 200005
 #include<bits/stdc++.h>
#include <iostream>
#include<cmath>
# define lli long long int
using namespace std;
int N, A[MAX];
string S;
 
int main() {
   cin>>N;
   for(int i = 0; i < N; i++) 
   cin>>A[i];
   cin>>S;
   S[N-1] = '0';//S[N] is not available for swapping
   vector <int> vec;
   set <int> st;
   for(int i = 0; i < N; i++) {
      st.insert(A[i]);
      if(S[i] == '0') {
         while(!st.empty()) {//Push all elements of the set to vector if S[i] is 0
            vec.push_back(*st.begin());
            st.erase(st.begin());
         }
      }
   }
   sort(A, A+N);
   for(int i = 0; i < N; i++)
    if(A[i] != vec[i]) {//Every element of sorted array must match with the vector
      cout<<"NO"<<endl;
      return 0;
   }
   cout<<"YES"<<endl;
}
