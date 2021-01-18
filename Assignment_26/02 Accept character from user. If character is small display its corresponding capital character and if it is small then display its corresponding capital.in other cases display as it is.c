#include<stdio.h>

void Display(ch)
{
    if(ch >= 65 && ch <= 90)
    {
        //ch+32;
        printf("it converts into : %c ",ch+32);
    }
    else if(ch >= 97 && ch <= 122)
    {
        printf("it converts into : %c ",ch-32);
    }

}
int main()
{
    char c = '\0';

    printf("\nEnter the Character => ");
    scanf("%c",&c);

    Display(c);

    return 0;
}
