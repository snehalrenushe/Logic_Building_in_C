#include<stdio.h>

void Number(int iNo)
{
   if(iNo < 50)
   {
       printf("\nSmall");
   }
   else if(iNo > 50 && iNo <= 100)
   {
       printf("\nMedium");
   }
   else
   {
       printf("\nLarge");
   }
}
int main()
{
    int iValue = 0;

    printf("\nEnter a number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
