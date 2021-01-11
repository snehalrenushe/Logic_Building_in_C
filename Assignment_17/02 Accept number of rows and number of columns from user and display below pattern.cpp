/*
   Input  : iRow = 4     iCol = 4
   Output : 2 4 6 8 10
            1 3 5 7 9
            2 4 6 8 10
            1 3 5 7 9
*/

///============================================================///

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int ch = 1;
    for(int i = 1 ; i <= iRow ; i++)
    {
        for(int j = 1,ch = 1 ; j <= iCol ; j++)
        {
            if(i % 2 != 0)
            {
                printf(" %d ",2 * j);
            }
            else
            {
                if(ch % 2 == 0)
                {
                    printf(" %d ",++ch);
                    ch++;
                }
                else
                {
                    printf(" %d ",ch);
                    ch++;
                }
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
