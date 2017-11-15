//算找零
#include <stdio.h>
int main()
{
	int price=0;  //定义price变量 
	printf("请输入你的金额(元)：");
	scanf("%d",&price);  //键盘输入price 
	int change=100-price;
	printf("应该找您%d元\n",change);
	return 0; 
}
