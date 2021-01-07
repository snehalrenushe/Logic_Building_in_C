#include<stdio.h>

int MultDigits(int iNo)
{
  int Temp = 0 , Dig = 0, mult = 1;

  for(Temp = iNo ; Temp != 0 ; Temp = Temp / 10)
  {
      Dig = Temp % 10;
      {
        mult = mult * Dig;
      }
  }
  return mult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\nEnter a number => ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("multiplication of digits of %d is %d",iValue,iRet);

    return 0;
}
