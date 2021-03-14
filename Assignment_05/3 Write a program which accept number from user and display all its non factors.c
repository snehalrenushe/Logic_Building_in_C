#include<stdio.h>
#include<conio.h>

void FactRev(int iNo)
{
    int i = 0;


    for(i = 1 ; i <= iNo ; i++)
    {
        if(iNo % i != 0)
        {
            printf("\n %d",i);
        }
    }
}
int main()

{
    int iValue = 0;

    printf("\nEnter number: ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
