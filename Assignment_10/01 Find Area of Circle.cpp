#include<stdio.h>

double CircleArea(float fRadius)
{
    float Area;

    Area = 3.14 * fRadius * fRadius;

    return Area;
}
int main()
{
    float fValue = 0.0;
    float dRet = 0.0;

    printf("\nEnter radius => ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("\nArea of Circle is %f",dRet);

    return 0;
}
