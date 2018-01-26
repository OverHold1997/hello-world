/*编写程序：用整数型数组a存放一个8位长整型数（每个数组元素为一个一位整数），判断该数是否为对称数。该数由键盘输入。例如：132231为对称数。
**输入格式要求："%d"
**输出格式要求："no,it is not\n" "yes,it is\n"*/
#include <stdio.h>
int main()
{
	char a[8],i;
	scanf("%s",&a[8]);
	for(i=0;i<5;i++)
	{
		if(a[i]==a[i+4])
		{
			printf("yes,it is\n");
		}
		else 
		printf("no,it is not\n");
	}
	return 0;
}
