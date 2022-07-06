#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the year "<<endl;
	cin>>year;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				cout<<"Leap Year"<<endl;
			}
			else
			{
				cout<<"Not a leap year"<<endl;
			}
			
		}
		else
		{
			cout<<"Leap year"<<endl;
		}
	}
	else
	{
		cout<<"Not a leap year"<<endl;
	}
	return 0;
	
}
