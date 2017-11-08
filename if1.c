#include <stdio.h>
int main()
{ 
int height;
printf("请输入小明的身高：\n");
scanf("%d",&height);
if(height>=175)
{
printf("恭喜小明可以入选系篮球队！");
}
else
{
printf("对不起，你的身高不够！");
}
return 0; 
}
