//POINTER SIZE:
#include<iostream>
using namespace std;
struct rectangle{
	int length;
	int breadth;
};
int main()
{
	int *p1;
	char *p2;
	float * p3;
	double *p4;
	struct rectangle *p5;
	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(p4)<<endl;
	cout<<sizeof(p5)<<endl;
}

//Bcz pointer in independent of size of the data type
