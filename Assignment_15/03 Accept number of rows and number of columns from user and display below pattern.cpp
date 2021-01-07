/*
   Input  : iRow = 3     iCol = 5
   Output : 5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1

*/
///============================================================///
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    for(int i = 1 ; i <= iRow ; i++)
    {
        for(int j = iCol ; j >= 1 ; j--)
        {
            printf(" %d ",j);
        }

        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("\nEnter number of rows and columns elements => ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
