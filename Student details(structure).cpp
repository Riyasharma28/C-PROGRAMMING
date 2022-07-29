//STUDENT DETAILS:
#include<iostream>
using namespace std;
struct student 
{
	int rollno;
 string  name;
	string dept;
	int marks;
};
int main()
{
	struct student s;
     s.name = "Riya Sharma";
	s.rollno = 2;
	s.dept = "computer engineering";
	s.marks = 30;
	cout<<"Enter the details of the students: "<<endl<<endl;
	cout<<"Name : "<<s.name<<endl;
	cout<<"Rollno : "<<s.rollno<<endl;
	cout<<"Department : "<<s.dept<<endl;
	cout<<"Marks : "<<s.marks<<endl;
	return 0;
}
