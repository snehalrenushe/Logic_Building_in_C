#include<stdio.h>

float Percentage(int *Tmarks,int *Omarks)
{
    if(Tmarks < Omarks || Tmarks < 0)
    {
        return -1;
    }

    return ( (float)(*Omarks)/(*Tmarks) )* (100);
    //return ((float)Omarks / Tmarks) * (100);
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("\nPlease enter total marks : ");
    scanf("%d",&iValue1);

    printf("\nPlease enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(&iValue1,&iValue2);

    if(fRet == -1)
    {
        printf("\nInvalid Input.....\n\n");
    }
    else
    {
        printf("\n Percentage is : %0.2f% \n\n",fRet);
    }

    return 0;
}
