/*
   Input  : iRow = 4     iCol = 4
   Output : A A A A
            B B B B
            C C C C
            D D D D
*/
///============================================================///
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    char ch = 'A';
    for(int i = 1 ; i <= iRow ; i++,ch++)
    {
        for(int j = 1 ; j <= iCol ; j++)
        {
            printf(" %c ",ch);
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
