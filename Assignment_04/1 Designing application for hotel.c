#include<stdio.h>
#include<conio.h>

float CalculateBill(int iAmount)
{
    float discount = 0;

    if(iAmount <= 500)
    {
        printf("\nThere is no discount for given price.");
    }

    else if(iAmount <= 1500 && iAmount >= 500)
    {
        discount = (iAmount / 100) * 10;
        printf("\nThere is %f discount is given by hotel : ",iAmount - discount);
    }

    else
    {
        discount = (iAmount / 100) * 15;
        printf("\nThere is %f discount is given by hotel",iAmount - discount);
    }

    return 0;
}

int main()
{
    float price;

    printf("\nEnter a total bill amount => ");
    scanf("%f",&price);

    CalculateBill(price);

    return price;
}
