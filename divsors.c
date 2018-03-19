#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num;
	unsigned long div ;
	bool isPrime;
	int ture;
	printf("Please enter an integer for analysis; ");
	printf("Enter q to quit.\n");
	while(scanf("%lu",&num)==1)
	{
		for(div=2,isPrime=ture;(div*div)<=num;div++)
		{
			if(num%div==0)
			{
				if((div*div)!=num)
				printf("%lu is divisible by %lu and %lu.\n",
				       num,div,num/div);//%lu表示输出无符号长整型整数
				       else 
				       printf("%lu is divisible by %lu.\n",
					          num,div);
				isPrime=false;
			}			
		}
		if(isPrime)//if成立返回0值 
		printf("%lu is prime.\n",num);
		printf("Please enter anther integer for analysis; ");
		printf("Enter q to quit.\n"); 
	}
	printf("Bye.\n");
	return 0;
} 
