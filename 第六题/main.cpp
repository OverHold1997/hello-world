#include "Complex.h"
int main()
{
	Complex c1(3,4),c2;
	double d1;
	d1=2.5+c1;
	cout<<"d1="<<d1<<endl;
	c2=Complex(d1);
	cout<<"c2="<<endl;
	c2.display();
	return 0;
} 
