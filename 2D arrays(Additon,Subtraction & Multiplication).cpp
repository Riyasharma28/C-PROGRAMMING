#include<iostream>
using namespace std;
int main()
{
	//Intialisation & Declaration
	int A[2][2];int B[2][2];int multiplication[2][2];int subtraction[2][2];int addition[2][2];
	
	cout<<"Enter the value of 2x2 Matrix A"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>A[i][j];       
		}
		cout<<endl;
	}
	
	cout<<"Enter the value of 2x2 Matrix B"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>B[i][j];       
		}
		cout<<endl;
	}
	
	cout<<"Addition"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			 int addition[i][j]  = A[i][j] + B[i][j];  
		}
		cout<<endl;
	}
	
	cout<<"Multiplication"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			 int Multiplication[i][j]  = A[i][j] * B[i][j];    
		}
		cout<<endl;
	}
	
	cout<<"Subtraction"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			 int Subtraction[i][j]  = A[i][j] - B[i][j];    
		}
		cout<<endl;
	}

}
