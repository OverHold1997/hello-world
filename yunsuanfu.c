//逗号运算符 
#include <stdio.h>
int main()
{
	int a=1;int b=2;int c=3;
	a++,b++,c++;//逗号表达式
	a=(a+1,b+1,c+1);//赋值表达式，输出最大的数。  
	printf("a=%d,b=%d,c=%d",a,b,c);
	return 0;
} 
