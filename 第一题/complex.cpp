#include "complex.h"
double complex::get_real()
{
	return real;
}
double complex::get_imag()
{
	return imag;
}
void complex::display()
{
	cout<<"("<<real<<","<<imag<<"i)"<<endl;
}
complex complex::operator+(complex &c2)
{
	return complex(real+c2.real,imag+c2.imag);
}
