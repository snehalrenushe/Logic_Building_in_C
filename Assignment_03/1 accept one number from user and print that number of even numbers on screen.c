#include<stdio.h>
#include<conio.h>

void PrintEven(int iNo)
{
    int n=1,c=1;

    while(c<=iNo)
    {
        if(n%2 == 0)
        {
            c = c+1;
            printf("%d\n",n);
        }
        n++;
    }
    return iNo;
}

int main()
{
    int iValue = 0;

    printf("\nEnter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}




