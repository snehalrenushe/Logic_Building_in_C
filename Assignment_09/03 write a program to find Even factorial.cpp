/*
Input  : 5
Output : 8   (4*2)
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int Temp  = 0 , Fact = 1;

    for(Temp = iNo ; Temp > 1 ; Temp--)
    {
        if(Temp % 2 == 0)
        {
            Fact = Fact * Temp;
        }
    }
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\nEnter a number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("\nEven Factorial of number is %d ",iRet);

    return 0;
}
