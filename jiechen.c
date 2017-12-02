//阶乘 
#include <stdio.h>
int main()
{
	int i,n;
	long f;
	printf("请输入整数n的值：\n");
	scanf("%d",&n);
	for(f=1,i=n;i>=1;i--)
	{
		f=f*i;
	}
	printf("%d!=%ld\n",n,f);
	return 0;
} 
