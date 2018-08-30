//program to find the maximum between two numbers
//include library
#include<iostream>
using namespace std;
int main()
{
   //Declare variables
   int a,b;
   //take input
   cout<<"Enter two numbers: ";
   cin>>a>>b;
   //apply condition
   if(a>b)
   {
      cout<<a<<" is greater than "<<b<<endl;
   }
   else
      cout<<b<<" is greater than "<<a<<endl;
   return 0;

}
