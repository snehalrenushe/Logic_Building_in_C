#include<stdio.h>
#include<conio.h>

int Count(int iNo)
{
    int Dig = 0,Temp,cnt = 0;

    for(Temp = iNo ; Temp != 0 ; Temp = Temp / 10)
   {
       Dig = Temp % 10;
       {
           if(Dig < 6)
           {
               cnt++;
           }
       }
   }
   return cnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter a number => ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("\n%d.",iRet);
    getch();

    return 0;
}
