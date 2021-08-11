#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int Rev = 0;

    for(int i = iNo ; i % 10 > 0 ; i /= 10)
    {
        for(int j = iNo ; j % 10 != (i / 10) % 10 ; j /= 10)
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

    printf("Enter a number : ");
    scanf("%d",&No);

    Pattern(No);

    getch();

    return 0;
}
