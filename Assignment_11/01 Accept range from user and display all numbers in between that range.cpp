#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    if(iStart >= iEnd)
    {
        printf("\n Invalid range");
    }
    for(int i = iStart ; i <= iEnd ; i++)
        {
            printf(" %d ",i);
        }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("\nEnter Starting Point : ");
    scanf("%d",&iValue1);

    printf("\nEnter Ending Point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;

}
