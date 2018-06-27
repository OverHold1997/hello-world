#include "Matrix.h"
int main()
{
	Matrix a,b,c;
	a.input();
	b.input();
	cout<<endl<<"Matrix a:"<<endl;
	a.display();
	cout<<endl<<"Matrix b:"<<endl;
	b.display();
	c=a+b;
	cout<<endl<<"Matrix c=Matrix a+Matrix b:"<<endl;
	c.display();
	return 0;
}
