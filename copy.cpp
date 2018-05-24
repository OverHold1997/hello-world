#include<iostream>
using namespace std;
class  A
{
	float x,y;
public:
   A(float a=0, float b=0)
   {
   x=a;  
   y=b;	
   cout<<"调用了构造函数\n";
   }
   A(A &a)
  { 
	x=a.x;
	y=a.y;
    cout<<"调用了完成拷贝功能的构造函数\n";
  }
   void  Print()
   {  
   cout<<x<<'\t'<<y<<endl;  
   
   }
   ~A() 
   {  
   cout<<"调用了析构函数\n";  
   }
};
int main(void)
{   A a1(1.0,2.0);
    A a2(a1);
    A a3=a1;
    a1.Print();
    a2.Print();
    a3.Print();
}
