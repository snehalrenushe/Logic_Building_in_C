#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Minimum(int Arr[],int iLength)
{
    int min;
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] < min || i == 0)
        {
            min = Arr[i];

        }
    }

    return min;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *p = NULL;

    printf("\n Enter number of elements : ");
    scanf("%d",&iSize);

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

    iRet = Minimum(p,iSize);

    printf("\n Smallest Number is %d ", iRet);

    free(p);

    return 0;
}
