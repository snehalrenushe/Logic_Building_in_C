                            /*
                            Input  : 4
                            Output : # 1 * # 2 * # 3 * # 4 *
                            */
///============================================================///

#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1 ; i <= iNo ; i++)
    {
        printf("# %d * ",i);
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
