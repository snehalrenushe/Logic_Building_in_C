#include<stdio.h>
#include<string.h>


void StrCpyCap(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = "";

    StrCpyCap(arr,brr);

    printf("Another string is %s",brr);

    return 0;
}


