#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int ChkVowel(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'A' || *str == 'e' || *str == 'E' || *str == 'i' || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U')
        {
            return TRUE;
        }
      str++;
    }

    return iCnt;
}

int main()
{
    char arr[20]=" ";
    BOOL bRet = FALSE;

    printf("\n Enter String : ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("\nContains Vowel.");
    }
    else
    {
        printf("\nThere is no Vowel");
    }

    return 0;
}
