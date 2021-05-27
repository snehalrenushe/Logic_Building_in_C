#include<stdio.h>
#include<conio.h>

void Pattern(char *pstr)
{
    int i = 0 , j = 0;

    for(i = 0 ; pstr[i] != '\0' ; i++)
    {
        for(j = 0 ; pstr[j] != '\0' ; j++)
        {
            printf(" %c ",pstr[j]);
        }

        printf("\n");
    }
    return;
}

int main()
{
    char str[30]="\0" , dest[30] = "\0";

    printf("Enter The String : ");
    scanf(" %[^\n]s",str);

    Pattern(str);

    printf("%s",str);
    return 0;
}
