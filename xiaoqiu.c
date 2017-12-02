#include <stdio.h>
int main()
{
	float h,sum=0;
	int i;
	
	for(h=100,i=1;i<11;i++)
	{
		h=h/2;
		sum+=h*2+h;
		
	}
	printf("%f %f\n",sum,h);
	return 0; 
}
