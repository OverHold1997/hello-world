//while 语句 
#include <stdio.h>
int main()
{
	int x,n;
	scanf("%d",&x);
	n=0;
	n++;
	x/=10;
	while(x>0){
		n++;
		x/=10;
	}
	printf("%d",n);
	return 0;
	
}
