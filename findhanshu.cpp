//字符串示范,演示find函数 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string theString;
	theString="Abracadabra";
	cout<<"Position: "<<theString.find('a')<<endl;
	cout<<"Position: "<<theString.find('f');
	return 0;
} 
