//三个数的选择排序 
#include <stdio.h>
int main()
{
    int a,b,c;
    int t;//辅助变量 
	
	printf("请输入三个数：");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		//a=b;b=a;
		t=a;a=b;b=t;
			
	}//复合语句
	if(a>c)
	{
		t=a;a=c;c=t;
	}
    if(b>c)
	{
		t=b;b=c;c=t;
	}
	printf("递增排序结果：%d<%d<%d\n",a,b,c);
	return 0;
 } 
