#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while(iCnt < iNo)
    {
        printf(" 1 ");
        iCnt++;
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
