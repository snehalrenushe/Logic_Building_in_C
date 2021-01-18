#include<stdio.h>

void Display(ch)
{
    if(ch < 'a')
    {
        while(ch < 'Z')
        {
            ch++;
            printf(" %c ",ch);
        }
    }
    else
    {
        while(ch >= 'a')
        {
            ch--;
            printf(" %c ",ch);
        }
    }

    return;

}
int main()
{
    char c = '\0';

    printf("\nEnter the Character => ");
    scanf("%c",&c);

    Display(c);

    return 0;
}
