// WAP to check number is even or odd.
#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("enter any number");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        /* num % 2 is 0 */
        printf("number is even");
    }
    else
    {
        /* num % 2 is 1*/
        printf("number is odd");
    }  
    return 0;
}
