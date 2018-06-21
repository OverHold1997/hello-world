#include "Complex.h"
int main()
{
	Complex c1(1,2),c2(5,-10),c3;
	c3=c1+c2;
	cout<<"c1+c2=";
	c3.display();
	c3=c1-c2;
	cout<<"c1-c2=";
	c3.display();
	c3=c1*c2;
	cout<<"c1*c2=";
	c3.display();
	c3=c1/c2;
	cout<<"c1/c2=";
	c3.display();
	return 0;
} 
