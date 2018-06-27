#include <iostream>
using namespace std;
class Complex
{
	public:
		Complex(){real=0;imag=0;}
		Complex(double r){real=r;imag=0;}
		Complex(double r,double i){real=r;imag=i;}
		operator double(){return real;}
		void display();
	private:
		double real;
		double imag;
};

