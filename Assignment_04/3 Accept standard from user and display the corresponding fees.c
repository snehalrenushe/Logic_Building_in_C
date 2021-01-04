#include<stdio.h>
#include<conio.h>

int SchoolFees(int iStandard)
{
    if(iStandard == 1)
    {
        printf("\nFirst standard fees are 8900",iStandard);
    }
    else if(iStandard == 2)
    {
        printf("\nSecond standard fees are 12790",iStandard);
    }
    else if(iStandard == 3)
    {
        printf("\nThird standard fees are 21000",iStandard);
    }
    else if(iStandard == 4)
    {
        printf("\nForth standard fees are 23450",iStandard);
    }
}
int main()
{
    int std;

    printf("\nEnter any standard to display its fees =>");
    scanf("%d",&std);

    SchoolFees(std);

    getch();
    return 0;
}
