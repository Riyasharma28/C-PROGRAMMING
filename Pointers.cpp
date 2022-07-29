#include<iostream>
using namespace std;
int main()
{
	int var = 5;
	
	// data type *pointername -->Declaration
	int *ip;
	float *ft;
	double *db;
	char *ch;
	
	ip = &var;
	cout<<" The Variable value is: "<<var<<endl;
	cout<<"Pointer pointing to: "<<*ip<<endl;
	cout<<"Address in pointer: "<<ip<<endl;
	
	*ip = 6;
	cout<<endl;
	cout<<" The Variable value is: "<<var<<endl;
	cout<<"Pointer pointing to: "<<*ip<<endl;
	cout<<"Address in pointer: "<<ip<<endl;
}
