#include<stdio.h>
#include<string.h>

int Difference(char *str)
{
    int cCnt = 0,sCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            sCnt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            cCnt++;
        }
      str++;
    }

    return cCnt - sCnt;
}

int main()
{
    char arr[20]=" ";
    int iRet = 0;

    printf("\n Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}
