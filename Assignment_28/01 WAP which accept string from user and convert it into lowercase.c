#include<stdio.h>
#include<string.h>

int strutl(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
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
