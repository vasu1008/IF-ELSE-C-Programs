//WAP to check whether a character is vowel or consonant.
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("enter any character\n");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is a vowel",ch);
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is consonant",ch);
    }
    else
    {
        printf("%c is not an alphabet");
    }
    return 0;
}
