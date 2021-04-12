#include<stdio.h>

int Factorial(int iNo)
{
    int Temp = 0,Fact = 1;

    for(Temp = iNo ; Temp > 1 ; Temp--)
    {
        Fact = Fact * Temp;
    }
    return Fact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("\nEnter a number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("\nFactorial of number is %d.",iRet);

    return 0;
}
