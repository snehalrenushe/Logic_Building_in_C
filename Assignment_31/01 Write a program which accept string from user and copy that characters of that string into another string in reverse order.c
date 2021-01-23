#include<stdio.h>
#include<string.h>


void StrCpyRev(char *src,char *dest)
{
    int i;
    while(*src != '\0')
    {
        src++;
        i++;
    }
    src--;
    while(i > 0)
    {
        *dest = *src;
        dest++;
        src--;
        i--;
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

    StrCpyRev(arr,brr);

    printf("Another string is %s",brr);

    return 0;
}


