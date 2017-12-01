//条件运算符 
#include <stdio.h>
int main()
{
	int a;
	printf("请输入一个整数：");
	scanf("%d",&a);
	a=(a>6)?a+4:a*5;//条件运算符的格式 
	printf("%d\n",a);
	return 0;
}
