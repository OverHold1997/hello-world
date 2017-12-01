//拆数 
#include<stdio.h> 
int main() 
{ 
int A,b1,b2,b3,sum;
printf("请输入一个三位整数："); 
scanf("%d",&A); 
b1=A/100;
b2=A%100/10;
b3=A%10;//拆数过程 
sum=b1+b2+b3;
printf("b2=%d, b1=%d, b0=%d, sum=%d\n",b1,b2,b3,sum); 
return 0; 
}
