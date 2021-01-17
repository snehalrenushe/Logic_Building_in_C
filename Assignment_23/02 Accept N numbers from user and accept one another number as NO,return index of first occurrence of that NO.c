#include<stdio.h>

int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iFreq = 0;
    for(int i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] == iNo)
        {
            iFreq++;
            return iFreq;

        }
    }
    return -1;
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

    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("\nThere is no such number..");
    }
    else
    {
        printf("\nFirst Occurance of number is %d  ",iRet);
    }

    free(p);

    return 0;
}
