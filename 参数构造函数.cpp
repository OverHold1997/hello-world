#include<iostream>
using namespace std;
class A
{
	private:
		float x,y;
	public:
		A(float a,float b=10)//带缺省的构造函数 
		{
			x=a;
			y=b;
		}
		A()//不带缺省的构造函数 
		{
			x=0;
			y=0;
		}
		void Print()
		{
			cout<<x<<"\t"<<y<<endl;
		}
};
int main(void)
{
	A a1,a2(20.0),a3(3.0,7.0);//每一个对象必须要有相应的构造函数 
	{
		a1.Print();
		a2.Print();
		a3.Print();
		return 0;
	}
}
