#include<stdio.h>
#include<conio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1 ; i <= iNo/2 ; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("  %d",i);
        }
    }

    return 0;
}

int main()
{
    int iValue = 0;

    printf("\nEnter number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}




