#include<stdio.h>
#include<string.h>

void StrCpy(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    return;

}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = "";

    StrCpy(arr,brr);

    printf("Another string is %s",brr);

    return 0;
}


