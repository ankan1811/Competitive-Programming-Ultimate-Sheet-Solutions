/*Get the id and marks of 5 subjects of n students.
Sort them by this rule:
a.If any marks<35,neglect them
b.Compare marks of s0+s1+s2 and sort them according to this marks(Greater marks=higher rank).
c.If tied,Compare marks of s0+s1+s2+s3+s4 and sort them according to this marks(Greater marks=higher rank). 
d.If still tied,then compare id.(Greater id=Higher rank)
*/
// C++ program to demonstrate structure sorting in C++
#include <bits/stdc++.h>
using namespace std;

struct Student 
{

	int id; // Marks in math (Given)
	int s0; // Marks in Physics (Given)
	int s1; // Marks in Chemistry (Given)
	int s2; // Total marks (To be filled)
	int s3;
	int s4;
	int total1;
	int total2;
	int rank; // Rank of student (To be filled)
};

// Function for comparing two students according
// to given rules
bool compareTwoStudents(Student a, Student b)
{
	// If total marks are not same then
	// returns true for higher total
	
	
		if (a.total1 != b.total1)
		return a.total1 > b.total1;

	// If marks in Maths are same then
	// returns true for higher marks
	else if (a.total1 == b.total1 && a.total2 != b.total2)
		return a.total2 > b.total2;

	else 
		return a.id > b.id;
}

// Fills total marks and ranks of all Students
void computeRanks(Student a[], int n)
{
	// To calculate total marks for all Students
	for (int i = 0; i < n; i++)
	{
		a[i].total1 = a[i].s0+a[i].s1+a[i].s2;
		a[i].total2 = a[i].s0+a[i].s1+a[i].s2+a[i].s3+a[i].s4;
	}
	// Sort structure array using user defined
	// function compareTwoStudents()
	
	sort(a, a + n, compareTwoStudents);

	// Assigning ranks after sorting
	for (int i = 0; i < n; i++)
	{
		
		a[i].rank = i + 1;
	}
}

// Driver code
int main()
{
	int n ;
	cin>>n;
	 Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].id >>a[i].s0 >> a[i].s1 >> a[i].s2 >>a[i].s3 >>a[i].s4;
        
    }
      
    computeRanks(a, n);

	 for (int i = 0; i < n; i++) {
	 	if( a[i].s0>=35 && a[i].s1>=35 && a[i].s2>=35 && a[i].s3>=35 && a[i].s4>=35)
	 	{
		 
	 	cout<<a[i].id<<" ";
	 }
	 }
	return 0;
}


