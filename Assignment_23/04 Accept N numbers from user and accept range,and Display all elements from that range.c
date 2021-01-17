#include<stdio.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iFreq = 1;
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("\n %d ",Arr[i]);

        }
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2;
    int *p = NULL;

    printf("\n Enter number of elements : ");
    scanf("%d",&iSize);

    printf("\n Enter the Starting number : ");
    scanf("%d",&iValue1);

    printf("\n Enter the Ending number : ");
    scanf("%d",&iValue2);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\n Unable to allocate memory ...");
        return -1;
    }

    printf("\n Enter %d elements ",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("\n Enter elements %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iValue1,iValue2);

    free(p);

    return 0;
}
