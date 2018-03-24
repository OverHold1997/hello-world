#include <stdio.h>
 
int main(void)
{                
    double value1, value2;
    char operator;
    printf("Type in an expression: ");    
    scanf("%lf%c%lf", &value1, &operator, &value2);
    switch (operator)//选择操作数 
    {                
    case '+':
        printf("=%.2f\n", value1 + value2);
        break;
    case '-':
        printf("=%.2f\n", value1 - value2);
        break;
    case '*':
        printf("=%.2f\n", value1 * value2);
        break;
    case '/':
        printf("=%.2f\n", value1 / value2);
        break;
    default:
        printf("Unknown operator\n");//判断非法输入 
        break;
    }
 
    return 0;
}
