#include<iostream>
using namespace std;
int main()
{
	int arr[3]={1,2,3};
	
	double arr1[5];
	arr1[0]=1.456;
	arr1[1]=36.765;
	
	char myarr[4];
	myarr[0]='r';
	
	 int temp_arr[5];
	 cout<<"Enter 5 integers variables"<<endl;
	for(int i=0;i<5;i++)             //if i=1 then ull miss the 1st value
	{
		cin>>temp_arr[i];
	}
	cout<<"The values entered are "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<temp_arr[i]<<endl;
	}
	return 0;
	
}
