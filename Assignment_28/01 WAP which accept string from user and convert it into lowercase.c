#include<stdio.h>
#include<string.h>

int strutl(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
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

    strutl(arr);

    printf("Modified string is %s",arr);

    return 0;

}
