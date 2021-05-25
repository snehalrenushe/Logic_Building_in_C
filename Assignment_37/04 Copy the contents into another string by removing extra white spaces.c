#include<stdio.h>
#include<conio.h>

void StrCpy(char *rstr,char *last)
{
    if(rstr == 0)
    {
        printf("\nEmpty String......");
        return 0;
    }

    while(*rstr != '\0')
    {
        if(*rstr == ' ')
        {
            rstr++;
            continue;
        }

        while(*rstr != ' ' && *rstr != '\0')
        {
            *last = *rstr;
            rstr++;
            last++;
        }

        *last++=' ';
    }
    return;

}
int main()
{
    char str[30]="\0" , dest[30] = "\0";

    printf("Enter The String : ");
    scanf(" %[^\n]s",str);

    StrCpy(str,dest);

    printf("%s",dest);

    return 0;
}
