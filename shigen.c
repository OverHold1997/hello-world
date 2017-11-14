#include <stdio.h>
#include <matn.h>  //数学计算所需要的主函数
int main()
{   
    int a,b,c;
    double x1,x2,delta;  //定义变量
	printf("请输入一元二次方程三个系数："); 
	scanf("%d%d%d",&a,&b,&c); 
	delta=b*b-4*a*c;
	
	x1=(-b+sqrt(delta))/(2*a); 
	x2=(-b-sqrt(delta))/(2*a);
	printf("x1=%.2f\t x2=%.2f\n",x);  
	
	return 0;
	
}
