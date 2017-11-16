// 从键盘输入两个整数，然后显示第1个整数占第二个整数的百分比，保留到小数点后1位。
#include <stdio.h>
int main()
{
    int num1, num2;  //定义整形变量 
    float d;  //定义浮点型变量 
    printf("请输入两个整数：");   
    scanf("%d%d",&num1,&num2);  //从键盘输入 
    d=(float)(num1)/num2*100;  //将num1从整形转化为浮点型 
    printf("%d is %.1f percent of %d\n",num1,d,num2) ;  
    return 0; 
}
