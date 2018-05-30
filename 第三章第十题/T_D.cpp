#include"T_D.h"
Time::Time(int h,int m,int s)
{
	hour=h;
	minute=m;
	sec=s;
}
void display(Date &d,Time &t)
{
	cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
	cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}
Date::Date(int m,int d,int y)
{
	month=m;
	day=d;
	year=y;
}
