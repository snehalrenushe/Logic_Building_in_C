/*
Input  : 5
Output : * * * * * # # # # #
*/

#include<stdio.h>

int Display(int iNo)
{
    for(int i = 1 ; i <= iNo ; i++)
    {
        printf(" * ");
    }
    for(int j = 1 ; j <= iNo ; j++)
    {
        printf(" # ");
    }

}
int main()
{
    int iValue = 0;

    printf("\nEnter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
