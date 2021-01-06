#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int i,sum;
    if(iStart >= iEnd && iStart <= 0)
    {
        printf("\n Invalid range");
    }
    for(i = iStart ; i <= iEnd ; ++i)
        {
            if(i % 2 == 0)
            {
                printf(" %d ",i);
            }

        }
    sum = sum + i;
    return sum;
}
int main()
{
    int iValue1 = 0,iValue2 = 0,add;

    printf("\nEnter Starting Point : ");
    scanf("%d",&iValue1);

    printf("\nEnter Ending Point : ");
    scanf("%d",&iValue2);

    add = RangeSumEven(iValue1,iValue2);

    printf("\nAddition of all even numbers in between that range is %d",add);

    return 0;

}
