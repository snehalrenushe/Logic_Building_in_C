#include<stdio.h>

int TableRev(int iNo)
{
    int i;
    {
        for(i = 10 ; i >= 1 ; i--)
        {
            printf("\n%d",iNo*i);
        }
    }
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\nEnter a number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
