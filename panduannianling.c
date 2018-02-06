#include <stdio.h>
#include <stdlib.h>
int main()
{
	int day,month,year,birth,age;
	char gender;
	printf("Please input your busiest day.\n");
	scanf("%d",&day);
	if(day<1||day>7)
	{
		printf("Invalid input.");
		exit(0);
	}
	day=day*2;
	printf("Please input your gender.\n");
	printf("gender=f||gender=m\n");
	scanf("%s",&gender);
	if(gender=='f')
	{
		day=day+8;
	}
	else if(gender=='m')
	{
		day=day+4;
	}
	day=day*50;	
	printf("Please input your birthday.\n");
	scanf("%4d-%2d-%2d",&year,&month,&birth);
	if(month>=1&&month<=6)
	{
		day=day+2002;
	}
	else if(month>=7&&month<=12)
	{
		day=day+3002;
	}
	else if(month<01||month>12||day<01||day>31||year<0)
	{
		printf("Invalid input.");
	    exit(0);
	}
	day=day-year;
	age=day%100+10;
	printf("Your age is:%d\n",age);
	return 0;
} 
