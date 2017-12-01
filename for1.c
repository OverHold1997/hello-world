#include <stdio.h>
int main()
{
	int i;
	int sum=0;
	for(i=1;i<101;i++)
	{
	if(i%7==0)
	{sum+=i;
	printf("%d+",i);}
	} 
	printf("\b=%d\n",sum);//\b的用处盖住前面一个不想要的字符 
	return 0; 
}
