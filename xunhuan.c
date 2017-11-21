//判定输入一个整数的位数 
#include <stdio.h>
int main()
{
	int x;
	int n=0;
	scanf("%d", &x);
	n++;
	x /=10;
	while (x>0){
	n++;
	x /=10;
	}//循环结构 
	printf("%d\n",n);
	return 0;
} 
