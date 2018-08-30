//program to find all the roots on a quadratic equation
//include library
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//Declare variables
	float a,b,c,root1,root2,D;
	//take input
	cout<<"Enter the coeffecients of the quadratic equation:"<<endl;
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;	
	cout<<"c: ";
	cin>>c;
	D=(b*b)-(4*a*c);
	root1=(-b+sqrt(D))/2*a;
	root2=(-b-sqrt(D))/2*a;
	//apply condition and display output
	if(D>0)
	{	
		cout<<"The roots are "<<root1<<" and "<<root2<<endl; 
	}
	else if(D==0)
	{
		cout<<"Both the roots are "<<root1;
	}
	else if(a==0)
	{
		cout<<"The  given coefficients do not correspond to a quadratic equation"<<endl;
	}

	else 
		cout<<"The equation does not have real roots "<<endl;		
        return 0;

}
