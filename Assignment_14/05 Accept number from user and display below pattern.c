                            /*
                            Input  : 8
                            Output : 2 4 6 8 10 12 14 16
                            */
///============================================================///
#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1 ; i <= iNo ; i++)
    {
        printf(" %d ",i*2);
    }
}
int main()
{
    int iValue = 0;

    printf("\nEnter number of elements => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
