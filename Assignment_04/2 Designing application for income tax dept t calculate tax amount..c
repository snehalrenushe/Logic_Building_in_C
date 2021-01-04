#include<stdio.h>
#include<conio.h>

float IncomeTax(int iAmount)
{
    float Tax = 0;

    if(iAmount <= 500000)
    {
        printf("\nThere is no income tax for given income value.");
    }

    else if(iAmount >= 500000 && iAmount <= 1000000)
    {
        Tax = (iAmount * 100) / 10;
        printf("\nThere is %f tax for given income : ",Tax);
    }

    else if(iAmount >= 1000000 && iAmount <= 2000000)
    {
        Tax = (iAmount * 100) / 20;
        printf("\nThere is %f tax for given income : ",Tax);
    }

    else
    {
        Tax = (iAmount * 100) / 30;
        printf("\nThere is %f tax for given income",Tax);
    }

    return 0;
}

int main()
{
    int income;

    printf("\nEnter a total income  => ");
    scanf("%d",&income);

    IncomeTax(income);

    return income;
}
