#include<string> 
#include<iostream>
using namespace std;
class  Teacher
{
	public:
		Teacher(string nam,int a,char s,string tit,string ad,string t);
		void display();
	protected:
		string name;
		int age;
		char sex;
		string title;
		string addr;
		string tel;
};
class Cadre
{
	public:
		Cadre(string nam,int a,char s,string p,string ad,string t);
		void display();
	protected:
		string name;
		int age;
		char sex;
		string post;
		string addr;
		string tel;
};
class Person:public Teacher,public Cadre
{
	public:
		Person(string nam,int a,char s,string tit,string p,string ad,string t,float w);
		void show();
	private:
		float wage;
};
