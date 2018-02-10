#include <iostream>
using namespace std;//C加的头文件 
int Sqare(int );
int Cube(int );
int main()
{
	cout<<"The sqare of 27 is "<<Sqare(27)<<endl;
	cout<<"and the cube of 27 is "<<Cube(27)<<endl;////子函数调用 
	return 0;
} 
int Sqare(int n)
{
	return n*n;
}//子函数 
int Cube(int n)
{
	return n*n*n;
}//子函数 
