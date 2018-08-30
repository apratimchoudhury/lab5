//program to print all alphabets from a to z
//include library
#include<iostream>
using namespace std;
//write main  function
int main()
{
	//Declare variables
	char charvar='A';
	int a=0;
	//apply loop and display output
	while(charvar<='Z')
	{	
		a=int(charvar);
		cout<<charvar<<" ";
		a++;
		charvar=char(a);
		
	}
		
        return 0;

}
