#include<stdio.h>

int EvenFactorial(int iNo)
{
    int Temp  = 0 , Fact = 1,j;

    for(Temp = iNo ; Temp > 1 ; Temp--)
    {
        if(Temp % 2 == 0)
        {
            Fact = Fact * Temp;
        }
    }
}

int OddFactorial(int iNo)
{
    int Temp  = 0 , Fact = 1,j;

    for(Temp = iNo ; Temp > 0 ; Temp--)
    {
        if(Temp % 2 == 1)
        {
            Fact = Fact * Temp;
        }
    }
}

int main()
{
    int iValue = 0,iRet = 0,Ret,Diff;

    printf("\nEnter a number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("\nEven Factorial of number is %d.",iRet);

    Ret = OddFactorial(iValue);

    printf("\nOdd Factorial of number is %d.",Ret);

    Diff = iRet - Ret;

    printf("\nFactorial difference is %d ",Diff);

    return 0;
}
