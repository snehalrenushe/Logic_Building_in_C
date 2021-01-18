#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chksmall(char ch)
{
    if(ch >= 97 && ch <= 122)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\nEnter the character => ");
    scanf("%c",&cValue);

    bRet = Chksmall(cValue);

    if(bRet == TRUE)
    {
        printf("\nIt is Small Character.");
    }
    else
    {
        printf("\nIt is not a Small character.");
    }

    return 0;
}
