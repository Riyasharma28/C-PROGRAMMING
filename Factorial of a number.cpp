//WAP A PROGRAM TO FACTORIAL OF A NUMBER:
#include<iostream>
using namespace std;
int main()
{
	int x,fact;
	cout<<"Enter a number"<<endl;
	cin>>x;
	fact = x;
     while(x>1)
	{
		x--;
		fact = fact*x;
		
	}
	cout<<"Factorial of number is "<<fact<<endl;
	return 0;
}
