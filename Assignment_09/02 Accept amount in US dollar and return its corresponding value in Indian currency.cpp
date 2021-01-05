/*
1$ = 70 Rs/-
*/

#include<stdio.h>

int DollarToINR(int $)
{
    int Rs = 0;
    Rs = $ * 70;

    return Rs;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\nEnter a number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("\nValue in INR is %d ",iRet);

    return 0;
}
