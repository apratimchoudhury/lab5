//program to print all natural numbers from 1 to n
//include library
#include<iostream>
using namespace std;
//write main  function
int main()
{
	//Declare variables
	int n,a;
	//take input
	cout<<"Enter the value of n upto which the series is to be printed: ";
	cin>>n;
	//apply loop and display output
	a=1;	
	while(a<=n)
	{	
		cout<<a<<", ";
		a++;
		
	}
		
        return 0;

}
