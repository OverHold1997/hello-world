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
			cout<<"调用了构造函数"<<endl;
		}
		void Print(void)
		{
			cout<<x<<"\t"<<y<<endl;
		}
		~A()
		{
			cout<<"调用了析构函数"<<endl;
		}
}; 
int main()
{
	cout<<"进入main函数"<<endl;
	A *pal;
	pal=new A(3.0,5.0);//调研构造函数 
	pal->Print();
	delete pal;//调用析构函数 
	cout<<"推出main()函数"<<endl;
	return 0;
}
