// to check +ve,-ve and 0.
#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    // input no from user
    printf("enter any number");
    scanf("%d",&num);

    if (num>0)
    {
        /* code */
        printf("number is POSITIVE");
    }
    if (num<0)
    {
        /* code */
        printf("number is NEGATIVE");
    }
    if (num==0)
    {
        /* code */
        printf("number is ZERO");
    }
    return 0;
}