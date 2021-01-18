#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(ch)
{
    if(ch >= 33 && ch <=64)
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
    char c = '\0';

    BOOL bRet = FALSE;

    printf("\nEnter the Character => ");
    scanf("%c",&c);

    bRet = ChkSpecial(c);

    if(bRet == TRUE)
    {
        printf("\nIt is a special character.");
    }
    else
    {
        printf("\nIt is not a special character.");
    }

    return 0;
}
