/*以下程序的功能是从键盘输入10个整型数据，
放入数组a 中，求其最大值、最小值及其所在元素的下标位置并输出。
找出其中错误并改正之。*/ 
#include <stdio.h>
int main()
{   
    int a[10], n, max, min, maxPos, minPos;
 
    for (n=0, n<10, n++) 
    {
        scanf("%d", a[n]);  
    }
    max = min = a;      
    maxPos = minPos = 0;
    for (n=1; n<10; n++)
    {
        if (a[n] > max)
        {
                max = a[n];
                maxPos = n;
        }
        else if (a[n] < min)
        {
                min = a[n];
                minPos = n;
        }
    }
    printf("max=%d, pos=%d\n",max, maxPos);
    printf("min=%d, pos=%d\n",min, minPos);
}
