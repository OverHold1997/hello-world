#include "Student.h"
int main()
{
	Teacher teacher1(10001,"Li",'f',1234.5),teacher2;
	Student student1(20010,"wang",'m',89.5);
	cout<<"student1:"<<endl;
	student1.display();
	teacher2=Teacher(student1);
	cout<<"teacher2:"<<endl;
	teacher2.display();
	return 0; 
} 
