#include <stdio.h>
int main()
{
	int i;
	int sum=0;
	for(i=1;i<101;i++)
	{
	if(i%7!=0)
	continue;//结束本次循环 
	{sum+=i;
	printf("%d+",i);}
	}  
	printf("\b=%d\n",sum);
	return 0; 
}
