/*
��дһ���󷽳�ax2 + bx + c = 0�ĸ� �ĳ���
��3�������ֱ���b2-4ac�����㡢�����㡢��С����ʱ�ķ��̵ĸ���
Ҫ�������������a,b,c��ֵ����������  
*/
#include <iostream>
#include <cmath>
using namespace std;
void equation_1(int a,int b,int c)
{
	double x1,x2,temp;
	temp=b*b-4*a*c;
	x1=(-b+sqrt(temp))/(2*a*1.0);
	x2=(-b-sqrt(temp))/(2*a*1.0);
	cout<<"��������ȵ�ʵ��"<<endl;
	cout<<"x1 = "<<x1<<"x2 = "<<x2<<endl; 
}
void equation_2(int a,int b,int c)
{
	double x1,x2,temp;
	temp=b*b-4*a*c;
	x1=(-b+sqrt(temp))/(2*a*1.0);
	x2=x1;
	cout<<"������ȵ�ʵ��"<<endl;
	cout<<"x1 = "<<x1<<"x2 = "<<x2<<endl;
}
void equation_3(int a,int b,int c)
{
	double temp,real1,real2,image1,image2;
	temp=-(b*b-4*a*c);
	real1=-b/(2*a*1.0);
	real1=real2;
	image1=sqrt(temp);
	image2=-image1;
	cout<<"�������"<<endl;
	cout<<"x1 = "<<real1<<" + "<<image1<<"j"<<endl;
	cout<<"x2 = "<<real2<<" + "<<image2<<"j"<<endl; 
}

int main()
{
	int a,b,c;
	double temp;
	cout<<"����a,b,c��ֵ"<<endl;
	cin>>a>>b>>c;
	cout<<"����Ϊ:"<<a<<"x*x+"<<b<<"x+"<<c<<" = 0"<<endl;
	temp=b*b-4*a*c;
	if(temp>0)
	{
		equation_1(a,b,c);
	} 
	if(temp==0)
	{
		equation_2(a,b,c);
	}
	if(temp<0)
	{
		equation_3(a,b,c);
	}
	return 0;
}
