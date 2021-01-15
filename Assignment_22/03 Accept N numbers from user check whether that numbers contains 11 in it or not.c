#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] == 11)
        {
            return 1;
        }
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("\n 11 is Present.");
    }
    else
    {
        printf("\n 11 is Absent.");
    }

    free(p);

    return 0;
}
