//program to check if a number is negative, positive or zero
//include library
#include<iostream>
using namespace std;
//write main  function
int main()
{
	//Declare variables
	int a;
	//take input
	cout<<"Enter a number: ";
	cin>>a;
	//apply condition and display output
	if(a>0)
	{	
		cout<<a<<" is a positive number"<<endl; 
	}
	else if(a<0)
	{
		cout<<a<<" is a negative number"<<endl;
	}
	else 
		cout<<a<<" is neither positive nor negative!!"<<endl;		
        return 0;

}
