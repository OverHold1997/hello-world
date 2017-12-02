#include <stdio.h>
#include <math.h>//算术头文件 
int main()
{
    int year;
    double capital,deposit,rate;
    printf("Please enter rate, year, capital:");
    scanf("%lf,%d,%lf",&rate,&year,&capital);
    deposit=capital*pow(1+rate,year);//利用pow库函数代替指数 
    printf("deposit = %f\n",deposit);
	
	return 0;
}
