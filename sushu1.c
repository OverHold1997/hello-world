#include <stdio.h>
int main()
{
	int i,n;
	printf("input a number:");
	scanf("%d",&n);
	for(i=1;;i++)
	{
		if(i%n==0)//判断素数条件
		{
			printf("No\n"); 
			exit(0); 
		} 	
	} 
	printf("Yes\n");
	return 0; 
}
