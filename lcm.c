#include <stdio.h>

int main(){

    int a,b,max;
    printf("enter two number: \n");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }

    for(max;;max++)
    {
        if(max%a==0 && max%b==0)
        {
            printf("LCM OF NOS IS %d",max);
            break;
        }
    }


    return 0;

}