#include "Complex.h"
Complex Complex::operator +(Complex &C)
{
	Complex c;
	c.real=real+C.real;
	c.imag=imag+C.imag;
	return c;
}
Complex Complex::operator -(Complex &C)
{
	Complex c;
	c.real=real-C.real;
	c.imag=imag-C.imag;
	return c;
}
Complex Complex::operator *(Complex &C)
{
	Complex c;
	c.real=real*C.real-imag*C.imag;
	c.imag=imag*C.imag+real*C.imag;
	return c;
}
Complex Complex::operator /(Complex &C)
{
	Complex c;
	c.real=(real*C.real+imag*C.imag)/(C.real*C.real+C.imag*C.imag);
	c.imag=(imag*C.real-real*C.imag)/(C.real*C.real+C.imag*C.imag);
	return c;
}
void Complex::display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
