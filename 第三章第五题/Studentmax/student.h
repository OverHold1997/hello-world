#include<iostream>
using namespace std;
class student
{
public:
	int stunum;
	float score;
	student(int n,float s):stunum(n),score(s){}
	void max(student *arr);
};