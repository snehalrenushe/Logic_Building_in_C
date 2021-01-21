#include<stdio.h>
#include<string.h>


int LastChar(char *str,char ch)
{
    int i = 0,temp = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            temp = i;
        }
        str++;
        i++;
    }

    return temp;

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

    bRet = LastChar(arr,cValue);

    printf("Character location is %d",bRet);

    return 0;

}
