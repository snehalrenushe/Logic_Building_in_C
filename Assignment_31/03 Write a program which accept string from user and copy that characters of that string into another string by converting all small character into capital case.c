#include<stdio.h>
#include<string.h>


void StrCpyCap(char *src,char *dest)
{
    int i;
    while(*src != '\0')
    {
        up:
        if(*src >= 'a' && *src <= 'z')
       {
            *dest = *src - 32;
            dest++;
            src++;
            goto up;
       }
       *dest = *src;
       dest++;
       src++;
    }
    *dest = '\0';
    return;

}
int main()
{
    char arr[50] = "";
    char brr[30] = "";

    printf("Enter string : ");
    scanf("%[^\n]s",arr);

    StrCpyCap(arr,brr);

    printf("Another string is %s",brr);

    return 0;
}


