#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[],int iLength)
{
    int max;
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] > max)
        {
            max = Arr[i];

        }
    }

    return max;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *p = NULL;

    printf("\n Enter number of elements : ");
    scanf("%d",&iSize);

    printf("\n Enter the number : ");
    scanf("%d",&iValue);

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

    iRet = Maximum(p,iSize);

    printf("\n Largest Number is %d ", iRet);

    free(p);

    return 0;
}
