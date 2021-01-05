#include<stdio.h>

int Multiply(int N1,int N2,int N3)
{
    int Mult = 0;

    if(N1 == 0 )
         {
        Mult = N2*N3;
        }
        else if(N2 == 0)
        {
            Mult = N1*N3;
        }
        else if(N3 == 0)
        {
            Mult = N2*N3;
        }
        else if(N1 == 0 && N2 == 0)
        {
            Mult = N3*1;
        }
        else if(N1 == 0 && N3 == 0)
        {
            Mult = N2*1;
        }
        else if(N2 == 0 && N3 == 0)
        {
            Mult = N1*1;
        }
         else if(N1 == 0 && N2 == 0 && N3 == 0)
        {
            Mult = 0;
        }
   else
   {
       Mult = N1 * N2* N3;
   }

    return Mult;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRet = 0;

    printf("\nPlease Enter three numbers : ");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("\nMultiplication of given numbers is => %d ",iRet);

    return 0;
}
