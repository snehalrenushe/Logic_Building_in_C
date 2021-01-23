#include<stdio.h>
#include<string.h>


void StrCpyX(char *src,char *dest)
{
    int i;
    while(*src != '\0')
    {
        if(*src != ' ')
       {
            *dest = *src;
            dest++;
       }
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

    StrCpyX(arr,brr);

    printf("Another string is %s",brr);

    return 0;
}


