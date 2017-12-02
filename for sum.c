//多条件求和 
#include<stdio.h>
int main() 
{
int i,sum=0 ; 
for(i = 1 ;i<= 100 ;i++){
if(i%7 == 0 && i%3 != 0 && i%2==0)
{

sum+= i;
printf("%5d",i);//将打印的数按一定距离分开 
}
}
printf("\nsum=%d",sum);
} 
