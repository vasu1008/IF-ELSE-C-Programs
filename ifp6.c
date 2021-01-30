// WAP to check character is alphabet or not.
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("character is alphabet");
    }
    else
    {
        printf("character is not alphabet");
    }
    return 0;
}