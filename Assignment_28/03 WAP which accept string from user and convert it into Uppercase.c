#include<stdio.h>
#include<string.h>

int strltu(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
    return;
}

int main()
{
    char arr[20]="";

    printf("\nEnter String : ");
    scanf("%[^\n]s",arr);

    strltu(arr);

    printf("Modified string is %s",arr);

    return 0;

}
