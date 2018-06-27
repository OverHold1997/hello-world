#include <iostream>
using namespace std;
class Student
{
	private:
		int num;
		char name[20];
		char sex;
		float score;
	public:
		Student(int,char[],char,float);
		int get_num()
		{
			return num;
		}
		char *get_name()
		{
			return name;
		}
		char get_sex()
		{
			return sex;
		}
		void display()
		{
			cout<<"num:"<<num<<endl<<"name:"<<name<<endl<<"sex:"<<sex<<endl<<"score:"<<score<<endl;
		}
}; 
class Teacher
{
	private:
		int num;
		char name[20];
		char sex;
		float pay;
	public:
		Teacher(){}
		Teacher(Student&);
		Teacher(int n,char nam[],char sex,float pay);
		void display();		
};
