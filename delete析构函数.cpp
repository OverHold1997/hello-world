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
			cout<<"�����˹��캯��"<<endl;
		}
		void Print(void)
		{
			cout<<x<<"\t"<<y<<endl;
		}
		~A()
		{
			cout<<"��������������"<<endl;
		}
}; 
int main()
{
	cout<<"����main����"<<endl;
	A *pal;
	pal=new A(3.0,5.0);//���й��캯�� 
	pal->Print();
	delete pal;//������������ 
	cout<<"�Ƴ�main()����"<<endl;
	return 0;
}
