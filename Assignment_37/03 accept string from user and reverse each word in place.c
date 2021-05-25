#include<stdio.h>
#include<conio.h>

void StrWrdRev(char *rstr)
{
    char *first = NULL, *last = NULL , Cnt = '\0';

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

        first = rstr;

        while(*rstr != ' ' && *rstr != '\0')
        {
            rstr++;
        }

        last = --rstr;

        while(first < last)
        {
            Cnt = *first;
            *first = *last;
            *last = Cnt;
            first++;
            last--;
        }

        rstr++;
    }
    return;

}
int main()
{
    char str[30]="\0";

    printf("Enter The String : ");
    scanf(" %[^\n]s",str);

    StrWrdRev(str);

    printf("%s",str);

    return 0;
}
