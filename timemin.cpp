#include<iostream>
using namespace std;
class Time//声明class类 
{
	public:  //数据成员为公用的 
		int hour;
		int minute;
		int sec;
}; 
int main()
{
	Time t1;//定义t1为Time类的对象 
	cin>>t1.hour;//以下三行的作用为输入设定的时间 
	cin>>t1.minute;
	cin>>t1.sec;
	cout<<t1.hour<<":"<<t1.minute<<":"<<t1.sec<<endl;//输出时间 
	return 0;
}
