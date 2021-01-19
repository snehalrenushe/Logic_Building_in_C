#include<stdio.h>
#include<string.h>

int CountWhite(char *str)
{
    int No;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            No++;
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

    iRet = CountWhite(arr);

    printf("Modified string is %d",iRet);

    return 0;

}
