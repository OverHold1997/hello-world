#include <stdio.h>
int main()
{
float a, b ,c;
printf("请输入三个单精度数：");
scanf("%f%f%f",&a,&b,&c);
printf("三个数的和为%.3f，",a+b+c);
 
printf("均值为%.3f\n",(a+b+c)/3);
return 0;
}
