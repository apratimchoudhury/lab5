//program to compute factorial of a number
//include library
#include<iostream>
using namespace std;
//write main  function
int main()
{
	//Declare variables
	int n,a,f;
	//take input
	cout<<"Enter number: ";
	cin>>n;
	//apply loop and display output
	a=1;	
	f=1;
	while(a<=n)
	{	
		f=a*f;
		a++;
		
	}
	cout<< "The factorial of "<<n<<" is "<<f<<endl;
		
        return 0;

}
