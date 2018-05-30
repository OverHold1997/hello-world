#include <iostream>
using namespace std;
class student
{
	public:
		student(int n,float s):stunum(n),score(s){}
		void change(int n,float s)
		{
			stunum=n;
			score=s;
		}
		
		void display()
		{
			cout<<stunum<<" "<<score<<endl;
		}
	private:
		int stunum;
		float score;
};
