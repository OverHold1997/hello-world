#include<iostream>
using namespace std;
class A
{
	private:
		float x,y;
	public:
		A(float a,float b=10)//��ȱʡ�Ĺ��캯�� 
		{
			x=a;
			y=b;
		}
		A()//����ȱʡ�Ĺ��캯�� 
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
	A a1,a2(20.0),a3(3.0,7.0);//ÿһ���������Ҫ����Ӧ�Ĺ��캯�� 
	{
		a1.Print();
		a2.Print();
		a3.Print();
		return 0;
	}
}
