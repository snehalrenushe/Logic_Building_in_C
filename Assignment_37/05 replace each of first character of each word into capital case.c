#include<stdio.h>
#include<conio.h>

void StrCap(char *cstr)
{
    if(cstr == 0)
    {
        printf("\nEmpty String......");
        return 0;
    }

    while(*cstr != '\0')
    {
        if(*cstr == ' ')
        {
            cstr++;
            continue;
        }

        if(*cstr >= 'a' && *cstr <= 'z')
        {
            *cstr = *cstr - 32;
            *cstr++;
        }

        while(*cstr != ' ' && *cstr != '\0')
        {
            cstr++;
        }
    }
    return;

}
int main()
{
    char str[30]="\0" , dest[30] = "\0";

    printf("Enter The String : ");
    scanf(" %[^\n]s",str);

    StrCap(str);

    printf("%s",str);
    return 0;
}
