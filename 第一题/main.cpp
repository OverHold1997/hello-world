#include "complex.h"
int main()
{
	complex c1(3,4),c2(5,-10),c3;
	c3=c1+c2;
	cout<<"c3=";
	c3.display();
	return 0;
}
