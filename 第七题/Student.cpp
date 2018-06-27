#include "Student.h"
#include <string.h>
Student::Student(int n,char nam[],char s,float sco)
{
	num=n;
	strcpy(name,nam);
	sex=s;
	score=sco;
}
Teacher::Teacher(int n,char nam[],char s,float p)
{
	num=n;
	strcpy(name,nam);
	sex=s;
	pay=p;
}
Teacher::Teacher(Student& stud)
{
	num=stud.get_num();
	strcpy(name,stud.get_name());
	sex=stud.get_sex();
	pay=1500;
}
void Teacher::display()
{
	cout<<"num:"<<num<<endl<<"name:"<<name<<endl<<"sex:"<<sex<<endl<<"pay:"<<pay<<endl;
}
