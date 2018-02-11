//演示subsrt,find,length函数 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name="Olivia Johnson Peterson";
	int index;
	index=name.find(' ');
	cout<<"First Name: "<<name.substr(0,index)<<endl;
	name=name.substr(index+1,name.length()-1);
	index=name.find(" ");
	cout<<"Middle Name: "<<name.substr(0,index)<<endl;
	name=name.substr(index+1,name.length()-1);
	cout<<"Last Name: "<<name;
	return 0;
} 
