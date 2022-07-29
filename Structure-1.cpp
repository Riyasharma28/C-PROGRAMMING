//AREA OF A RECTANGLE:
#include<iostream>
using namespace std;
struct rectangle
{
	int length;
	int breadth;
	
};
int main()
{
	struct rectangle r;
	r.length = {10};
	r.breadth  = {5};
	cout<<"Area of the rectangle is "<<r.length*r.breadth<<endl;
	return 0;
}
