/*
   Input  : iRow = 6    iCol = 6
   Output : *  *  *  *  *  *
            *  #  #  #  *  *
            *  #  #  *  $  *
            *  #  *  $  $  *
            *  *  $  $  $  *
            *  *  *  *  *  *
*/

///============================================================///

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    for(int i = 1 ; i <= iRow ; i++)
    {
        for(int j = 1 ; j <= iCol ; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i + j == (iRow + iCol) / 2 + 1)
            {
                printf(" * ");
            }
            else if(i + j <= (iRow + iCol) / 2 + 1)
            {
                printf(" # ");
            }
            else
            {
                printf(" $ ");
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
