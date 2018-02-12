//演示get函数 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch1,ch2,ch3;
	cout<<"Enter three characters includeing a space."<<endl;
	cin.get(ch1);
	cin.get(ch2);
	cin.get(ch3);
	cout<<"Your entered: "<<ch1<<ch2<<ch3<<endl;
	return 0;
} 
