#include<stdio.h>
#include<conio.h>

int DisplayConvert(char cValue)
{
    if(cValue >= 97 && cValue <= 122)
    {
        cValue = cValue - 32;
        printf("%c\n",cValue);
    }

    else if(cValue >= 'A' && cValue <= 'Z')
    {
        cValue = cValue + 32;
        printf("%c\n",cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("\nEnter Character : \n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
