#include<iostream>
using namespace std;
int main()
{
	cout<<"Largest number"<<endl;
	int x,y,z;
	cin>>x>>y>>z;
	if(x>y)
	{
		if(x>z)
		cout<<"X is the largest"<<endl;
		else{
			cout<<"Z is the largest"<<endl;
		}
	}
	else if(y>x) 
	{
		cout<<"Y is the largest"<<endl;
		if(y>z)
		{
			cout<<"Y is the largest"<<endl;
		}
		else
		{
			cout<<"Z is the largest"<<endl;
		}
	}
	return 0;
}
