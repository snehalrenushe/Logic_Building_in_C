#include<stdio.h>

int CountEven(int iNo)
{
  int Temp , Dig , E_cnt = 0;

  for(Temp = iNo ; Temp != 0 ; Temp = Temp / 10)
  {
      Dig = Temp % 10;
      if(Dig % 2 == 0)
      {
          E_cnt++;
      }
  }
  return E_cnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter a number => ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}
