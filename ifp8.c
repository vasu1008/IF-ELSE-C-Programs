// WAP to check entered triangle is equilateral,isosceles or scalene.
#include<stdio.h>
#include<conio.h>

int main()
{
    int side1,side2,side3;
    printf("enter the sides of triangle\n");
    scanf("%d %d %d",&side1,&side2,&side3);

    if ((side1==side2) && (side2==side3))
    {
        printf("this is an equilateral triangle");
    }
    else if ((side1==side2) || (side2==side3) ||(side3==side1))
    {
        printf("this is isosceles triangle");
    }
    else
    {
        printf("this is scalene triangle");
    }  
    return 0;
}
