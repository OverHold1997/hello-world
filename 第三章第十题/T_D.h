#include<iostream>
using namespace std;
class Date;
class Time
{
public:
		Time(int,int,int);
		friend void display(Date &,Time &);
private:
	int hour;
	int minute;
	int sec;
};
class Date
{
public:
	Date(int,int,int);
	friend void display(Date &,Time &);
private:
	int month;
	int day;
	int year;
};
