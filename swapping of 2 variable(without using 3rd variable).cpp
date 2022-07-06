//WAP A PROGRAM TO PERFORM SWAPPING WITHOUT USING 3RD VARIABLE:
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	x=5;
	y=6;
	cout<<"Before Swapping"<<endl;
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"After Swapping"<<endl;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	
	return 0;
}
