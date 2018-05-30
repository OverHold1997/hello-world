#include "Compare.h"
int main() 
{
	Compare<int>cmp1(3,7);
	cout<<cmp1.max()<<"is the Maximum of two integer numbers."<<endl;
	cout<<cmp1.min()<<"is the Minimum of two integer numbers."<<endl<<endl;
	Compare<float>cmp2(45.78,93.6);
	cout<<cmp2.max()<<"is the Maximum of two float numbers."<<endl;
	cout<<cmp2.min()<<"is the Minimum of two float numbers."<<endl<<endl;
	Compare<char>cmp3('a','A');
	cout<<cmp3.max()<<"is the Maximum of two characters."<<endl;
	cout<<cmp3.min()<<"is the Minimum of two characters."<<endl;
	return 0;
}
