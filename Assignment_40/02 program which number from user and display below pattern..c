#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int Rev = 0;

    for(Rev = 0 ; iNo % 10 > 0 ; iNo /= 10)
    {
        Rev = (iNo % 10) + (Rev * 10);
    }

    for(int i = Rev ; i % 10 > 0 ; i /= 10)
    {
        for(int j = Rev ; j % 10 > 0 ; j /= 10)
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
