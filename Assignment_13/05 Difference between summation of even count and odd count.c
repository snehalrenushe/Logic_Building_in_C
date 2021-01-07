#include<stdio.h>

int CountEven(int iNo)
{
  int Temp , Dig , E_cnt = 0,sum = 0;

  for(Temp = iNo ; Temp != 0 ; Temp = Temp / 10)
  {
      Dig = Temp % 10;
      if(Dig % 2 == 0)
      {
          sum = sum + Dig;
      }
  }
  return sum;
}

int CountOdd(int iNo)
{
  int Temp , Dig , O_cnt = 0,sum = 0;

  for(Temp = iNo ; Temp != 0 ; Temp = Temp / 10)
  {
      Dig = Temp % 10;
      if(Dig % 2 == 1)
      {
          sum = sum + Dig;
      }
  }
  return sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int Diff = 0;
    int Ret = 0;

    printf("\nEnter a number => ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("\nSummation of even count is %d ",iRet);

    Ret = CountOdd(iValue);
    printf("\nSummation of Odd count is %d",Ret);

    Diff = iRet - Ret;

    printf("\n\nDifference between summation of odd count and odd count is %d",Diff);

    return 0;
}




