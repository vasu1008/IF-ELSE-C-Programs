// WAP to write a factorial of entered no
#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i=1;
    long fact = 1;     //factorial of 0 does not exist
    printf("enter num\n");
    scanf("%d",&num);
    if(num>0)
    {
        for(; i<=num ; i++)
        {
            fact = fact * i;
        }
    }
    else
    {
        printf("enter integer greater than 0!");
    }
    printf("Factorial of %d is = %ld",num,fact);
    return 0;
    
} 