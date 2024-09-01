#include <stdio.h>

int calc(float a, float b, char op)
{
    if (op == '+')
    {
        printf("%f + %f = %.2f", a, b, a + b);
    }
    else if (op == '-')
    {
        printf("%f - %f = %.2f", a, b, a - b);
    }
    else if (op == '*')
    {
        printf("%f * %f = %.2f", a, b, a * b);
    }
    else if (op == '/')
    {
        if (b != 0)
        {
            printf("%f / %f = %.2f", a, b, a / b);
        }
        else
        {
            printf("division by zero not possible");
        }
    }
    else
    {
        printf("incorrect operator");
    }
    return 0;
}

int main()
{

    float a, b;
    char op;

    printf("enter two numbers: \n");
    scanf("%f", &a);
    scanf("%f", &b);

    printf("choose operator from +,-,*,/ \n");
    scanf(" %c", &op);

    calc(a, b, op);

    return 0;
}