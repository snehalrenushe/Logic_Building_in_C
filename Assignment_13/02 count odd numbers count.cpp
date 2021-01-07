#include<stdio.h>

int CountOdd(int iNo)
{
  int Temp , Dig , O_cnt = 0;

  for(Temp = iNo ; Temp != 0 ; Temp = Temp / 10)
  {
      Dig = Temp % 10;
      if(Dig % 2 == 1)
      {
          O_cnt++;
      }
  }
  return O_cnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter a number => ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}
