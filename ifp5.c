// WAP to check enterd year is leap year or not.
#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    printf("enter year:");
    scanf("%d",&year);
    if (((year % 4 == 0)&&(year % 100 !=0)||(year % 400==0)))
    {
        /* code */
        printf("leap year");
    }
    else
    {
        /* code */
        printf("common year");
    }   
    return 0;
}
