#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    float Area;

    Area = fWidth * fHeight;

    return Area;
}
int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    float dRet = 0.0;

    printf("\nEnter Width => ");
    scanf("%f",&fValue1);

    printf("\nEnter Height => ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("\nArea of Rectangle is %.3f",dRet);

    return 0;
}
