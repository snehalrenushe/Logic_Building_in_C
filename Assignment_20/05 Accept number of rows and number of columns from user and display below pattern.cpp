/*
   Input  : iRow = 5    iCol = 5
   Output : 1  2  3  4  5
            1  2        5
            1     3     5
            1        4  5
            1  2  3  4  5
*/

///============================================================///

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    for(int i = 1 ; i <= iRow ; i++)
    {
        for(int j = 1 ; j <= iCol ; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf(" %d ",j);
            }
            else
            {
                printf("   ");
            }

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
