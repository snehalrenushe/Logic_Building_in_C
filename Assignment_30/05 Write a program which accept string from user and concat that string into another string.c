#include<stdio.h>
#include<string.h>

void StrCpyCat(char *src,char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    *src = ' ';
    src++;

    while(*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }

    *src = '\0';

    return;

}
int main()
{
    char arr[50] = "Marvellous Multi OS";
    char brr[30] = "Logic Building";

    StrCpyCat(arr,brr);

    printf("Another string is %s",arr);

    return 0;
}


