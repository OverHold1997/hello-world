#include <stdio.h>
int main()
{
	char ch;//定义字符变量 
	
	printf("键盘读取单个字符：\n");
	 
	ch=getchar();//将字符赋值给getchar 
	
	putchar(ch);//用putchar输出字符
	
	return 0;
}
