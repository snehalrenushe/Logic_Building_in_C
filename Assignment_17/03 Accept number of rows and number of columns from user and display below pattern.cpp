/*
   Input  : iRow = 5     iCol = 5
   Output : a b c d e
            1 2 3 4 5
            a b c d e
            1 2 3 4 5
            a b c d e
*/

///============================================================///

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    char ch = 'a';
    for(int i = 1 ; i <= iRow ; i++)
    {
        for(int j = 1,ch = 'a' ; j <= iCol ; j++)
        {
            if(i % 2 != 0)
            {
                printf(" %c ",ch++);
            }
            else
            {
                printf(" %d ",j);
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
