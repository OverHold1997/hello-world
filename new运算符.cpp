#include<iostream>
using namespace std;
class A
{
	private:
		float x,y;
	public:
		A(float a,float b)
		{
			x=a;
			y=b;
		}
		A()
		{
			x=0;
			y=0;
		}
		void Print()
		{
			cout<<x<<"\t"<<y<<endl;
		}
}; 
int main()
{
	A *pa1,*pa2;//pa1,pa2是指向A类对象的指针变量 
	pa1=new A(3.0,5.0);//用new动态开辟对象空间，初始化 
	pa2=new A;//用new动态开辟空间，调用构造函数初始化 
	pa1->Print();
	pa2->Print();
	delete pa1;
	delete pa2;
	return 0;
}
