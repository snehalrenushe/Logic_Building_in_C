                            /*
                            Input  : 5
                            Output : A B C D E
                            */
///============================================================///
#include<stdio.h>

int Pattern(int iNo)
{
    char ch ='A';
    for(int i = 1 ; i <= iNo ; i++)
    {
        printf(" %c ",ch);
        ch++;
    }
    return 0;
}
int main()
{
    int iValue = 0;

    printf("\nEnter a number of elements => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
