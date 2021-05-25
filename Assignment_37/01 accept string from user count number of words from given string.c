#include<stdio.h>
#include<conio.h>
int Word_Count(char *Cstr)
{
    int Cnt = 0;

    while(*Cstr != 0)
    {
        if(*Cstr == 0)
        {
            Cstr++;
            continue;
        }
        while(*Cstr != ' ' && *Cstr != '\0')
        {
            Cstr++;
        }
        Cnt++;
        Cstr++;
    }
    return Cnt;

}
int main()
{
    char str[30]="\0";

    printf("Enter The String : ");
    scanf(" %[^\n]s",str);

    printf("%d",Word_Count(str));

    return 0;
}
