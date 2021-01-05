#include<stdio.h>

int Table(int iNo)
{
    int -i;
    {
        for(i = 1 ; i <= 10 ; i++)
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

    Table(iValue);

    return 0;
}
