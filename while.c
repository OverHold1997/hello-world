#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入一个整数：");
	scanf("%d",&a);
	printf("%d=",a);
	for(b=2;a>b;b++)
	{
		while(b!=a){
			if(a%b==0){
				a=a/b;
				printf("%d*",b);
			}//while语句 
			else break;//跳出循环 
			
		}
		
	}
	printf("%d\n",a);
	return 0;
}
