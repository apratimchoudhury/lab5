//program to find sum of all natural numbers from 1 to n
//include library
#include<iostream>
using namespace std;
//write main  function
int main()
{
	//Declare variables
	int n,a,s;
	//take input
	cout<<"Enter the value of n upto which the sum is to be calculated: ";
	cin>>n;
	//apply loop and display output
	a=1;	
	s=0;
	while(a<=n)
	{	
		s=s+a;
		a++;
		
	}
	cout<<"The sum is : "<<s<<endl;	
        return 0;

}
