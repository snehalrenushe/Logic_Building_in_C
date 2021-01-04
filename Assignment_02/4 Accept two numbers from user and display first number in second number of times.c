#include<stdio.h>
#include<conio.h>

int Display(int iNo,int iFrequency)
{
    for(int iNo = 1 ; iNo <= iFrequency ; ++iNo)
    {
        printf("\n output is : ",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}




