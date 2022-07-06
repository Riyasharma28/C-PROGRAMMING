#include<iostream>
using namespace std;
int main()
{
	int x,y,temp;
	x=5;
	y=6;
	cout<<"Before Swapping"<<endl;
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"After Swapping"<<endl;
	temp=x;
	x=y;
	y=temp;
	cout<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	
	return 0;
}
