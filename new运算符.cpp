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
	A *pa1,*pa2;//pa1,pa2��ָ��A������ָ����� 
	pa1=new A(3.0,5.0);//��new��̬���ٶ���ռ䣬��ʼ�� 
	pa2=new A;//��new��̬���ٿռ䣬���ù��캯����ʼ�� 
	pa1->Print();
	pa2->Print();
	delete pa1;
	delete pa2;
	return 0;
}
