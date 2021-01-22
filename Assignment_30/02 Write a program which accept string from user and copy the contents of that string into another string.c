#include<stdio.h>
#include<string.h>


void StrNCpy(char *src,char *dest,int No)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
        No--;
    }
    *dest = '\0';

    return;
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = "";
    int i;

    StrNCpy(arr,brr,10);

    printf("Another string is %s",brr);

    return 0;
}


