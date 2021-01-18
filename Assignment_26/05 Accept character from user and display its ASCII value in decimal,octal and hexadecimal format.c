#include<stdio.h>

void Display(char ch)
{
    printf("\n Decimal => %d ",ch);
    printf("\n Hexadecimal => %o ",ch);
    printf("\n Octal => %x ",ch);
}
int main()
{
    char c = '\0';

    printf("\nEnter the Character => ");
    scanf("%c",&c);

    Display(c);

    return 0;
}
