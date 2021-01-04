#include<stdio.h>
#include<conio.h>

int FactDiff(int iNo)
{
    int sum = 0;

    for(int i = 1 ; i < iNo ; i++)
    {
        if(iNo % i == 0 )
        {
            sum = sum + i;
        }
    }

    printf("\nThe sum of factors is ",sum);

    return sum;
}

int FactNDiff(int iNo)

{
    int Nsum = 0;

    for(int i = 1 ; i < iNo ; i++)
    {
        if(iNo % i != 0 )
        {
            Nsum = Nsum + i;
        }
    }

    printf("\nThe sum of non factors is ",Nsum);

    return Nsum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int NiRet = 0;

    printf("\nEnter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    NiRet = FactNDiff(iValue);

    printf("%d",NiRet);

    int Diff = iRet - NiRet;

    printf("\n%d",Diff);

    return 0;
}
