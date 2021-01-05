#include<stdio.h>

void MultipleDisplay (int iNo)
{
    int i;

    for(i =1 ; i <= 5 ; i++)
    {
        printf(" %d ",i*iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
