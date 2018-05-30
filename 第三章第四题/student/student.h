#include<iostream>
using namespace std;
class Student
{
	private:
		int stunum;
		float score;
	public:
		void Print();
		Student(int n,float s):stunum(n),score(s){}
};