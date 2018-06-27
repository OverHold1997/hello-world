#include "Complex.h"
Complex Complex::operator +(Complex &c)
{
	return Complex(real+c.real,imag+c.imag);
}
Complex Complex::operator+(int &i)
{
	return Complex(real+i,imag);
}
void Complex::display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
Complex operator+(int&i,Complex &c)
{
	return Complex(i+c.real,c.imag);
}
