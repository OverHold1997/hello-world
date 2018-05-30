#include "student.h"
int main()
{
	student stu(101,78.5);
	void fun(student &);
	fun(stu);
	return 0;
}
