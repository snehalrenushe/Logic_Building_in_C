#include<stdio.h>
#include<conio.h>

int MultFact(int iNo)
{
    int Mult = 1 , i = 1;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = iNo/2 ; i >= 1 ; i--)
    {
        if(iNo % i == 0)
        {
            Mult = Mult * i;
        }
    }

    return Mult;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("\nEnter number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("\nFactors of given %d is : %d",iValue,iRet);

    return 0;
}
