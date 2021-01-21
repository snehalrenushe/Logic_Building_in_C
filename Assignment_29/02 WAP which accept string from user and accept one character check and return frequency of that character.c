#include<stdio.h>
#include<string.h>


int CountChar(char *str,char ch)
{
    int i = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            i++;
        }
        str++;
    }

    return i;

}


int main()
{
    char arr[20] = "\0";
    char cValue = '\0';
    int bRet = 0;

    printf("\nEnter string : ");
    fgets(arr,20,stdin);

    printf("\nEnter the Character : ");
    scanf("%c",&cValue);

    bRet = CountChar(arr,cValue);

    printf("\nCharacter Frequency is %d",bRet);

    return 0;

}
