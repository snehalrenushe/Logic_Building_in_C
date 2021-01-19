#include<stdio.h>
#include<string.h>

int DisplayDigit(char *str)
{
    int No;

    while(*str != '\0')
    {
        if(*str >= 48&& *str <= 57)
        {
            No = (No * 10)+(*str - 48);
        }

        str++;
    }
    return No;
}

int main()
{
    char arr[20]="";
    int iRet = 0;

    printf("\nEnter String : ");
    scanf("%[^'\n']s",arr);

    iRet = DisplayDigit(arr);

    printf("Modified string is %d",iRet);

    return 0;

}
