#include<stdio.h>
#include<conio.h>

int TouristBill(int iKilometer)
{
    int Res = 0;

    if(iKilometer < 100)
    {
        Res = iKilometer * 25;
    }
    else
    {
       Res = 100 * 25;
       Res = Res + ( (iKilometer - 100)*15);
    }

    return Res;
}
int main()
{
    int km = 0,Rent = 0;

    up:

    printf("\nEnter the number of kilometers from ueer =>");
    scanf("%d",&km);

    if(km == 0)
    {
        printf("\nInvalid input");
        goto up;
    }

    Rent=TouristBill(km);

    printf("\nThe estimated rent is %d",Rent);

    getch();
    return 0;
}
