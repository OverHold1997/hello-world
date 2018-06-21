#include<iostream>
using namespace std;
class Complex
{
	private:
		double real;
		double imag;
	public:
		Complex(){real=0;imag=0;}
		Complex(double r,double i){real=r;imag=i;} 
		Complex operator+(Complex &c2);
		Complex operator-(Complex &c2);
		Complex operator*(Complex &c2);
		Complex operator/(Complex &c2);
}; 

