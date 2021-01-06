#include<stdio.h>

float FhtoCs(float fTemp)
{
    float Celsius = 0.0;

    Celsius = (fTemp - 32) * 5 / 9;

    return Celsius;
}
int main()
{
    float fValue = 0.0;
    float fRet = 0.0;

    printf("\nEnter temperature in Fahrenheit => ");
    scanf("%f",&fValue);

    fRet = FhtoCs(fValue);

    printf("\n Fahrenheit to temperature conversion is %f",fRet);

    return 0;
}
