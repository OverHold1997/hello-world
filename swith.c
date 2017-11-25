//一年中天数 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int   year,month,day;
    int days=0;
    
	printf("请输入年月日：");
	scanf("%d-%d-%d",&year,&month,&day);
		
	switch(month) 
	{
		case 12:days+=30; //处理11月份的30天 
		case 11:days+=31;//处理10月份的31天
		case 10:days+=30;
		case 9:days+=31;
		case 8:days+=31;
		case 7:days+=30;
		case 6:days+=31;
		case 5:days+=30;
		case 4:days+=31;
		case 3:if((year%4==0)&&(year%100!=0)||(year%400==0))
	            days=days+29;
	          else
	            days=days+28;//二月份的天数取决于是否为闰年 
	    case 2:days=days+31;
	    case 1:days=days+day;
	}
	 
	printf("%d年%d月%d日是%d年的第%d天\n",
	              year,month,day,year,days); 
	return 0;
 } 
