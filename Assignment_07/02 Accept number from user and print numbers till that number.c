#include<stdio.h>

void Display (int iNo)
{
    for(int i = 1 ; i <= iNo ; i++)
    {
        printf(" %d ",i);
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
