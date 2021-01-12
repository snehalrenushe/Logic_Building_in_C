/*
   Input  : iRow = 4     iCol = 4
   Output : *  *  *  *
            *  *  *  #
            *  *  #  #
            *  #  #  #
*/

///============================================================///

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int j;
    for(int i = 1 ; i <= iRow ; i++)
    {
        for(int j = iCol ; j >= 1 ; j--)
        {
            if(i <= j)
            {
                printf(" * ");
            }
            else
            {
                printf(" # ");
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
