//POINTER TO STRUCTURE:
#include<iostream>
using namespace std;
struct rectangle{
	int length;
	int breadth;

	
};
int main()
{
	struct rectangle r = {10,5};
	cout<<r.length<<endl;
	cout<<r.breadth<<endl;
	 rectangle *p = &r;
	 cout<<p->breadth<<endl;
	 cout<<p->length<<endl;
	 return 0;
	 
	
}
