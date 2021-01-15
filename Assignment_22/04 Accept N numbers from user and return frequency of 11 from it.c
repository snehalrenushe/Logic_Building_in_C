#include<stdio.h>

int Frequency(int Arr[],int iLength)
{
    int iFreq = 0;
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] == 11)
        {
            iFreq++;

        }
    }
    return iFreq;
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

    iRet = Frequency(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}
