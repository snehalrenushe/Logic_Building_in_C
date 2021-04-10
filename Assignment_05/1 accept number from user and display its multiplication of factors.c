#include<stdio.h>
#include<conio.h>
#define M 1000000007

int MultFact(int iNo)
{
    int mult = 1;

    for(int i = 1 ; i * i <= iNo ; i++)        //12
    {
        if(iNo % i == 0)
        {
            if(iNo / i == i)
            {
                mult = (mult * i) % M;
            }
            else
            {
                mult = (mult * i) % M;
                mult = (mult * iNo / i) % M;
            }
        }
    }

    return mult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}
