//选择结构 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("+\n");
    }
    else if(n<0)
    {
        printf("-\n");
    }
    else if(n==0)//关系运算符< > == 
    {
        printf("this number has no sign\n");
    }
    return 0;
}
