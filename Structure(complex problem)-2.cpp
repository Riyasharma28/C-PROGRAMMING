//COMPLEX NUMBER:
#include<iostream>
using namespace std;
struct complex{
	int real;
	int img;
	
};
int main()
{
	struct complex c;
	c.real = {1};
	c.img = {2};
	cout<<"Complex number is "<<c.real<<"+i"<<(c.img)<<endl;
	
}
