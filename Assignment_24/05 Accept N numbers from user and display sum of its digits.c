#include<stdio.h>

void Digits(int Arr[],int iLength)
{
    int i,No = 0,cnt = 0,Dig = 0,sum = 0;

    for(i = 0 ; i < iLength ; i++)
    {
        No = Arr[i];
        while(No > 0)
        {
            Dig = No % 10;
            sum = sum + Dig;
            No = No / 10;
        }
        printf(" %d ",sum);
        sum = 0;
    }
}

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
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

    Digits(p,iSize);

    free(p);

    return 0;
}
