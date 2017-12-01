//一百以内7的倍数之和 
#include<stdio.h>
int main() 
{
int i,begin,stop,sum=0 ; 
begin = 1 ; 
stop = 100 ; 
for(i = begin ;i<= stop ;i++)//循环体 
{ 
if(i%7 == 0) 
sum+= i ;//求和 
}
printf("sum=%d",sum); 
} 
