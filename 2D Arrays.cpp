#include<iostream>
using namespace std;
int main()
{
	int myarray[5][5];//Declaration
	int myarray1[2][2] = {1,2,3,4}; //Intialisation & Declaration
	int myarray2[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
	//FOR 2D ARRAYS WE NEED 2 *FOR LOOPS*
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<myarray2[i][j]<<"  ";
		}
		cout<<endl;
	}
	//IN ORDER TO ENTER OWN VALUES:
	cout<<"Enter the value of 2x2 Matrix"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>myarray1[i][j];       
		}
		cout<<endl;
	}
	
	cout<<"The value of 2x2 Matrix"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<myarray1[i][j]<<"  ";
		}
		cout<<endl;
	}

}
