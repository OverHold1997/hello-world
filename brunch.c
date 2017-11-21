//单分支结构 
#include <stdio.h>
int main()
{
    int num,b;
	
	printf("请输入一个数：");
	scanf("%d",&num);
	 
	b=num%7;//求模 
    if(b==0)//注意关系运算符，不能用赋值运算符 
         printf("%d是7的倍数",num);  
     
	return 0;
 } 
