#include<iostream>
using namespace std;
int main()
{
	int A[3];
	int B[3];
	int add[3];int sub[3];int mul[3];
	cout<<"Enter 3 integers for array A"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>A[i];
		
	}
	cout<<"Enter 3 inetgers for array B"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>B[i];	
	}
	//ADDITION:
	cout<<"Addition Operation"<<endl;
	for(int i=0;i<3;i++)
	{
		add[i]=A[i]+B[i];
		cout<<add[i]<<" "<<endl;
	}
	//SUBTRACTION:
	cout<<"Subtraction Operation"<<endl;
		for(int i=0;i<3;i++)
	{
		sub[i]=A[i]-B[i];
		cout<<sub[i]<<" "<<endl;
		
	}
	//MULTIPLICATION
	cout<<"Multiplication Operation"<<endl;
		for(int i=0;i<3;i++)
	{
		mul[i]=A[i]*B[i];
		cout<<mul[i]<<" "<<endl;
	}
	return 0;
}
