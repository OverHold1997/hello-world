#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	float alpha;
	float beta;
	alpha=sqrt(7.3+fabs(-100.0));//fabs取绝对值 
	cout<<"alpha "<<alpha<<endl;
	beta=pow(alpha,2);//2次方 
	cout<<"alpha aquared "<<beta<<endl;
	return 0;
}
