#include<stdio.h>
#include<string.h>

int CountChar(char *str,char ch)
{
    int i = 1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return i;
        }
        str++;
        i++;
    }

    return -1;
}

int main()
{
    char arr[20] = "\0";
    char cValue = '\0';
    int bRet = 0;

    printf("\nEnter string : ");
    gets(arr);

    printf("\nEnter the Character : ");
    cValue = getchar();

    bRet = CountChar(arr,cValue);

    printf("Character location is %d",bRet);

    return 0;
}
