#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return 1;
        }

        str++;
    }

    return 0;
}


int main()
{
    char arr[20] = "\0";
    char cValue = '\0';
    BOOL bRet = 0;

    printf("\nEnter string : ");
    fgets(arr,20,stdin);

    printf("\nEnter the Character : ");
    scanf("%c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("\nCharacter Found.");
    }
    else
    {
        printf("\nCharacter not found.");
    }

    return 0;

}
