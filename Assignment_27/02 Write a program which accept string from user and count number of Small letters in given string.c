#include<stdio.h>
#include<string.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
      str++;
    }
    return iCnt;
}

int main()
{
    char arr[20]=" ";
    int iRet = 0;

    printf("\n Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}
