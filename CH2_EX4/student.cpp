#include "student.h"
void student::set_value()
{
	cin>>num>>name>>sex;
}
void student::display()
{
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl; 
}