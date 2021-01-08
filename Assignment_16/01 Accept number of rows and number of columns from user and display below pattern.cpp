/*
   Input  : iRow = 4     iCol = 4
   Output : A B C D
            A B C D
            A B C D
            A B C D
*/
///============================================================///
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    char ch = 'A';
    for(int i = 1 ; i <= iRow ; i++)
    {
        for(int j = 1,ch = 'A' ; j <= iCol ; j++,ch++)
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
