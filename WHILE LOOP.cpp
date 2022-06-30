#include<iostream>
using namespace std;
int main()
{
	char mychar;
	cout<<"Enter the character"<<endl;
	cin>>mychar;
	while(mychar=='x')
	{
		cout<<"My character is printed again: ";
		cin>>mychar;
	}
	
	
	return 0;
}
