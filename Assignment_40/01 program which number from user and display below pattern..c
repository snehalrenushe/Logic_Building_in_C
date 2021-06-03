#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    for(int i = iNo ; i % 10 > 0 ; i /= 10)
    {
        for(int j = iNo ; j % 10 > 0 ; j /= 10)
        {
            printf(" %d ",j%10);
        }

        printf("\n");
    }
    return;
}
int main()
{
    int No = 0;

    printf("Enter a number => ");
    scanf("%d",&No);

    Pattern(No);

    return 0;
}
