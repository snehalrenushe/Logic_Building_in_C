#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int j;
    if(iNo == 0)
    {
        return TRUE;
    }
    while(iNo > 0)
    {
        j = iNo % 10;

        if(j == 0)
        {
           return TRUE;
        }

        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;

    bool bRet = FALSE;

    printf("\nEnter a number => ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("\n It contains Zero.");
    }
    else
    {
        printf("\n There is no Zero.");
    }
}
