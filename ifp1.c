// WAP to accept two number and print largest among them.
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;

    printf("enter number1:");
    scanf("%d",&a);

    printf("enter number2:");
    scanf("%d",&b);

    if (a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",b,a);
    }
    
    return 0;
}