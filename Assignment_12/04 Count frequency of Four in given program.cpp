#include<stdio.h>
#include<conio.h>

int CountFour(int iNo)
{
    int cnt,Temp ,Dig;

    for(Temp = iNo ; Temp != 0 ; Temp = Temp / 10)
    {
        Dig = Temp % 10;
        {
            if(Dig == 4)
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

    iRet = CountFour(iValue);

    printf("\nFour's frequency is %d.",iRet);
    getch();

    return 0;
}
