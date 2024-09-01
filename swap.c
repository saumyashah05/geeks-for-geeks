#include <stdio.h>

int a,b;

int swap(int a,int b)
{
    int swap;
    swap=a;
    a=b;
    b=swap;

    printf("numbers after swap are %d and %d",a,b);

    return 0;
}

int main(){

    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);

    printf("\noriginal numbers are %d and %d\n",a,b);
    swap(a,b);
    

    return 0;

}