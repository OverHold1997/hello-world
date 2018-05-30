#include "Student.h"
int main()
{
	int i;
	Student stu[5]={Student(1001,87.5),Student(1002,85.5),Student(1003,82.5),Student(1004,75.0),Student(1005,95.5)};
	Student *p=stu;
	for(i=0;i<=2;p=p+2,i++)
	{
		p->Print();	
	}
    return 0;
}
