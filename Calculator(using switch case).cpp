#include<iostream>
using namespace std;
int main()
{
	cout<<"Calculator"<<endl<<endl;
	cout<<"Enter the operations to be performed"<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2Subtraction"<<endl;
	cout<<"3.Multiplication"<<endl;
	cout<<"4.Division"<<endl<<endl;
	
	int option_no;
	cout<<"Enter the operation to be performed"<<endl;
	cin>>option_no;
	int x,y;
	cout<<"Enter two integers"<<endl;
	cin>>x>>y;
	switch(option_no)
	{
		case 1:
			cout<<"Additon Operation"<<endl;
			cout<<"Sum of two integers results is "<<(x+y)<<endl;
			break;
		case 2:
			cout<<"Subtraction Operation"<<endl;
			cout<<"Difference of two integers results is "<<(x-y)<<endl;
			break;
		case 3:
			cout<<"Multiplication Operation"<<endl;
			cout<<"Product of two integers results is "<<(x*y)<<endl;
			break;
		case 4:
				cout<<"Division Operation"<<endl;
			cout<<"Division of two integers results is "<<(x/y)<<endl;
			break;
		
	}
	return 0;
}
