//do while 语句 
#include <stdio.h>
int main()
{
	int x,n;
	scanf("%d",&x);
	n=0;
	do{
		x/=10;
		n++;
	}while(x>0);
	printf("%d\n",n);
	return 0;
}
