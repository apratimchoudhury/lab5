//program to print Fibonacci Series upto n terms
//include library
#include<iostream>
using namespace std;
//write main  function
int main()
{
	//Declare variables
	int n,a,b,c,d;
	//take input
	cout<<"Enter the value of n upto which the series is to be printed: ";
	cin>>n;
	//apply loop and display output
	a=1;
	b=0;	
	c=1;
	d=1;
	cout<<1<<", ";	
	while(a<=n)
	{
		cout<<d<<", ";
		b=c;
		c=d;
		d=b+c;
		a++;
				


	}
	
			
        return 0;

}
