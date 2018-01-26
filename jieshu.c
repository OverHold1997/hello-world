/*小红有5本新书，借给3位小朋友，若每人每次只能借一本，则可以有多少种不同的借法？
**输出格式要求："%d:%d,%d,%d\n"*/
#include <stdio.h>
int main()
{
	int i,a,b,c,k=0;
	for(i=100;i<555;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%100%10;
		if(a<=5&&a>0&&b<=5&&b>0&&c<=5&&c>0&&a!=b&&a!=c&&b!=c)
		{
			k++;
			printf("%d:%d,%d,%d\n",k,a,b,c);
		} 
	}
	return 0;
}
