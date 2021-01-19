#include<stdio.h>
#include<string.h>

void strtog(char *str)
{

    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 90)
        {
            *str = *str + 32;
        }
        else if(*str >= 90 && *str <= 122)
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20]="";

    printf("\nEnter String : ");
    scanf("%[^'\n']s",arr);

    strtog(arr);

    printf("Modified string is %s",arr);

    return 0;

}
