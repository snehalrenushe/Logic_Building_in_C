#include<stdio.h>

void DisplayASCII()
{
    int i;

    for(;i <= 255;i++)
    {
        printf("\n %3d %9x %8o %6c ",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();

    return 0;
}
