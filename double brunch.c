//双分支结构
#include <stdio.h>
int main()
{
    int num,b;
	
	printf("请输入一个数：");
	scanf("%d",&num);
	 
	b=num%7;
    if(b==0)
         printf("%d是7的倍数",num);  
	else
	     printf("%d不是7的倍数",num); 
     
	return 0;
 } 
