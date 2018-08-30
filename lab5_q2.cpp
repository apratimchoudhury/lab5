//program to find the maximum between three numbers
//include library
#include<iostream>
using namespace std;
int main()
{
	//Declare variables
	int a,b,c;
	//take input
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	//apply condition
	if(a>b&&a>c)
	{	
		cout<<"The greatest of the three entered numbers is "<<a<<endl; 
	}
	else if(b>a&&b>c)
	{
		cout<<"The greatest of the three entered numbers is "<<b<<endl;
	}
	else 
		cout<<"The greatest of the three entered numbers is "<<c<<endl;		
        return 0;

}
