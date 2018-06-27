#include "Teacher.h"
Teacher::Teacher(string nam,int a,char s,string tit,string ad,string t)
{
	name=nam;
	age=a;
	sex=s;
	title=tit;
	addr=ad;
	tel=t;
}
void Teacher::display()
{
	cout<<"name:"<<name<<endl; 
	cout<<"age:"<<age<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"title:"<<title<<endl;
	cout<<"address:"<<addr<<endl;
	cout<<"tel:"<<tel<<endl;
}
Cadre::Cadre(string nam,int a,char s,string p,string ad,string t)
{
	name=nam;
	age=a;
	sex=s;
	post=p;
	addr=ad;
	tel=t;
}
void Cadre::display()
{
	cout<<"name:"<<name<<endl; 
	cout<<"age:"<<age<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"post:"<<post<<endl;
	cout<<"address:"<<addr<<endl;
	cout<<"tel:"<<tel<<endl;
}
Person::Person(string nam,int a,char s,string t,string p,string ad,string tel,float w):
Teacher(nam,a,s,t,ad,tel),Cadre(nam,a,s,p,ad,tel),wage(w){}
void Person::show()
{
	Teacher::display();
	cout<<"post:"<<Cadre::post<<endl;
	cout<<"wages:"<<wage<<endl;
}
