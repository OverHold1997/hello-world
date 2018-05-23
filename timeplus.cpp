#include<iostream>
using namespace std;
class Time
{
	public:
		int hour;
		int minute;
		int sec;
}; 
int main()
{
	void set_time(Time&);//函数声明 
	void show_time(Time&);//函数声明 
	Time t1;//定义t1为Time类的对象 
	set_time(t1);//调用set_time函数，向t1对象中的数据成员输入数据 
	show_time(t1);//调用show_time函数，输出t1对象中的数据 
	Time t2;//定义t2为Time类的对象
	set_time(t2);//调用set_time函数，向t2对象中的数据成员输入数据 
	show_time(t2);//调用show_time函数，输出t2对象中的数据
	return 0;
}
void set_time(Time& t)//定义函数set_time，形参t是引用变量 
{
	cin>>t.hour;//输入设定的时间 
	cin>>t.minute;
	cin>>t.sec;
}
void show_time(Time& t)//定义函数show_time，形参t是引用变量 
{
	cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;//输出对象中的变量 
}
