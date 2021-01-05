#include<stdio.h>

void Display(int iNo)
{
    switch(iNo)
    {
        case 0:
            {
                printf("\nZero");
                break;
            }

        case 1:
            {
                printf("\nOne");
                break;
            }
        case 2:
            {
                printf("\nTwo");
                break;
            }
        case 3:
            {
                printf("\nThree");
                break;
            }
        case 4:
            {
                printf("\nFour");
                break;
            }
        case 5:
            {
                printf("\nFive");
                break;
            }
        case 6:
            {
                printf("\nSix");
                break;
            }
        case 7:
            {
                printf("\nSeven");
                break;
            }
        case 8:
            {
                printf("\nEight");
                break;
            }
        case 9:
            {
                printf("\nNine");
                break;
            }
        case -1:
            {
                printf("\nOne");
                break;
            }
        case -2:
            {
                printf("\nTwo");
                break;
            }
        case -3:
            {
                printf("\nThree");
                break;
            }
        case -4:
            {
                printf("\nFour");
                break;
            }
        case -5:
            {
                printf("\nFive");
                break;
            }
        case -6:
            {
                printf("\nSix");
                break;
            }
        case -7:
            {
                printf("\nSeven");
                break;
            }
        case -8:
            {
                printf("\nEight");
                break;
            }
        case -9:
            {
                printf("\nNine");
                break;
            }
        default:
            {
                printf("\nInvalid Number");
            }
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
