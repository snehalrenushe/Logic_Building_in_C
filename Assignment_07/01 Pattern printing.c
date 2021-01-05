#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1 ; i <= iNo ; i++)
    {
        printf("$ * ");
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
