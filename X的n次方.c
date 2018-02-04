#include <stdio.h>
#include <math.h>
int main()
{                        
    int x,n;
    printf("x=? n=?");
    scanf("%d%d",&x,&n);
    printf("%d**%d=%d\n",x,n,power(x,n));
}                        
power(int x,int n)
{                       
    if(n==0) return 1;
    else return x*power(x,n-1);
} //递归求解 
