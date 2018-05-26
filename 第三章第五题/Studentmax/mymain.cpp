#include "student.h"
int main()
{
	student stu[5]={student(1001,85.5),student(1002,82.5),student(1003,75.5),student(1004,85.5),student(1005,95.5)};
	void max(student*);
	student *p=&stu[0];
	max(p);
	return 0;
}


