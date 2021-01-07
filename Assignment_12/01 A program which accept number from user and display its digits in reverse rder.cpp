#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iDigit * 10 + (iNo % 10);
        iNo = iNo / 10;
    }
    printf("%d",iDigit);
}
int main()
{
    int iValue = 0;


    printf("\n Enter a number => ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
