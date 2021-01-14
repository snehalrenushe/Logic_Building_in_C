#include<stdio.h>

int Display(int Arr[],int iLength)
{
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] % 5 == 0)
        {
            printf("%d ",Arr[i]);
        }
    }

    return 1;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
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

    iRet = Display(p,iSize);

    free(p);

    return 0;
}
