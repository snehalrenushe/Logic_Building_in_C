#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int No)
{
    if(No%2 == 0)
    {
        printf("\nGiven number is even.");
    }
    else
    {
        printf("\nGiven number is odd.");
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\nEnter number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    return 0;
}




