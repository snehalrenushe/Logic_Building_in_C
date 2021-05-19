#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT N)
{
    BOOL flag = 0;

    if(N & (1 << 14))
    {
        flag = 1;
    }

    return flag;
}

int main()
{
    UINT No = 0;
    BOOL Ret = 0;

    printf("\nEnter a number => ");
    scanf("%d",&No);

    Ret = ChkBit(No);

    if(Ret)
    {
        printf("\n15th Bit of Given number %d is ON.",No);
    }
    else
    {
        printf("\n15th Bit of Given number %d is OFF.",No);
    }

    getch();
    return 0;

}
