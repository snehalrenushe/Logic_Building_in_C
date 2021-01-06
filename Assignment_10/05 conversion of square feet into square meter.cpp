#include<stdio.h>

float SquareMeter(float Temp)
{
    float SqMeter = 0;

    SqMeter = Temp * (0.0929);

    return SqMeter;
}
int main()
{
    float iValue = 0;
    float dRet = 0.0;

    printf("\nEnter area is Square Feet  => ");
    scanf("%f",&iValue);

    dRet = SquareMeter(iValue);

    printf("\n Square feet to square meter conversion is %f",dRet);

    return 0;
}
