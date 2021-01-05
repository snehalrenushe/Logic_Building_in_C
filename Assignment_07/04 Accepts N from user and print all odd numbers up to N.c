#include<stdio.h>

void OddDisplay (int iNo)
{
    int i,j;

    for(j = 1 , i = 1 ; i <= iNo ; i = i + 2 , j++)
    {
        printf(" %d ",i );
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
