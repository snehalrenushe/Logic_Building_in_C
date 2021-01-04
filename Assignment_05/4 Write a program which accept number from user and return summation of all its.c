#include<stdio.h>
#include<conio.h>

int SumNonFact(int iNo)
{
    int sum = 0;

    for(int i = 1 ; i <= iNo ; i++)
    {
        if(iNo % i != 0)
        {
            sum = sum + i;
        }
    }

    printf("\nThe sum of non factors is ",sum);

    return sum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter number: ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}
