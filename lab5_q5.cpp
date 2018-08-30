//program to check if a character is uppercase or lowercase
//include library
#include<iostream>
using namespace std;
//write main  function
int main()
{
	//Declare variables
	char a;
	//take input
	cout<<"Enter any character: ";
	cin>>a;
	
	
	//apply condition and display output
	if(a>=65&&a<=90)
	{	
		cout<<a<<" is an uppercase letter "<<endl; 
	}
	
	else 
		cout<<a<<" is a lowercase letter"<<endl;		
        return 0;

}
