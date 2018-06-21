#include<iostream>
using namespace std;
class complex
{
	private:
		double real,imag;
	public:
		complex(){real=0;imag=0;}
		complex(double r,double i){real=r;imag=i;}
		complex operator +(complex &c2);
		double get_real();
		double get_imag();
		void display(); 
};
