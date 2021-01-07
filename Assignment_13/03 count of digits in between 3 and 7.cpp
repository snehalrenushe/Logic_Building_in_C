#include<stdio.h>

int CountRange(int iNo)
{
  int Temp , Dig , cnt = 0;

  for(Temp = iNo ; Temp != 0 ; Temp = Temp / 10)
  {
      Dig = Temp % 10;
      if(Dig >= 3 && Dig <= 7 )
      {
          cnt++;
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

    iRet = CountRange(iValue);

    printf("count is %d",iRet);

    return 0;
}
