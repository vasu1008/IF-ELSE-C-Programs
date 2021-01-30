// WAP to accept numbers from user and print them in ascending and decending order.
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("enter three numbers :");
    scanf("%d %d %d %d",&a,&b,&c);

    if ((a >= b) && (a >=c))
    {
        if (b >= c)
        {
            printf("\n descending : %d %d %d",a,b,c);
            printf("\n ascending : %d %d %d",c,b,a);
        }
        else
        {
            printf("\n descending : %d %d %d",a,c,b);
            printf("\n ascending : %d %d %d",b,c,a);
        }
        
    }
    else if ((b >= a) && (b >= c))
    {
        if (a >= c)
        {
            printf("\n descending : %d %d %d",b,a,c);
            printf("\n ascending : %d %d %d",c,a,b);
        }
        else
        {
            printf("\n descending : %d %d %d",b,c,a);
            printf("\n ascending : %d %d %d",a,c,b);
        }
        
    }
    else
    {
        if (a >= b)
        {
            printf("\n descending : %d %d %d",c,a,b);
            printf("\n ascending : %d %d %d",b,a,c);
        }
        else
        {
            printf("\n descending : %d %d %d",c,b,a);
            printf("\n ascending : %d %d %d",a,b,c);
        }
        
    }
    
    
    return 0;
}