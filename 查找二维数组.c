**输入格式要求："%lf" 提示信息："请输入一个4乘5的矩阵：\n" 
"请输入a[%d][%d]："
**输出格式要求："第%d行%d列的元素%.2f小于0\n"*/
#include <stdio.h>
int main()
{
    double a[4][5];
    int i,j;
    printf("请输入一个4乘5的矩阵：\n");
    for(i=0;i<4;i++)
    {
    	for(j=0;j<5;j++)
    	{
		printf("请输入a[%d][%d]：",i,j);
    	scanf("%lf",&a[i][j]);    		
		}
	}//双成循环初始化 
    for(i=0;i<4;i++)
    {
    	for(j=0;j<5;j++)
    	{
    		if(a[i][j]<0)
    		{
    			printf("第%d行%d列的元素%.2f小于0\n",i,j,a[i][j]);
			}
		}
	}//双成循环查找 
    return 0; 
}
