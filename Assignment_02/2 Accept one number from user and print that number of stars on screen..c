#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
    }

}
int main()
{
    int iValue = 0;

    printf("\nEnter a number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
