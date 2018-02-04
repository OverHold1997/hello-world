#include <stdio.h>
void MaxMinExchang(int a[], int n);
int main()
{
    int i, a[10];
    printf("Input 10 numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    MaxMinExchang(a, 10);
    printf("Exchang results:");
    for (i = 0; i < 10; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");
    return 0;
}
/* 函数功能：将数组中的最大数与最小数位置互换 */
void MaxMinExchang(int a[], int n)
{
    int  max = a[0], min = a[0], maxPos = 0, minPos = 0;
    int  i, temp;
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxPos = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            minPos = i;
        }
    }
    temp = a[maxPos];
    a[maxPos] = a[minPos];
    a[minPos] = temp;
}
