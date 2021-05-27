#include<stdio.h>
#include<conio.h>

void Pattern(char *pstr)
{
    int i = 0 , j = 0 , Temp = 0;

    Temp = strlen(pstr);
    {
        printf("\n");
    }

    for(i = 0 ; i < Temp ; i++)
    {
        for(j = 0 ; j < Temp ; j++)
        {
            if(pstr[j] >= 'A' && pstr[j] <= 'Z')
            {
                printf("%c ",pstr[j]+32);
            }
            else
            {
                printf("%c ",pstr[j]);
            }
        }
        printf("\n");
    }
    return;
}

int main()
{
    char str[30]="\0";

    printf("Enter The String : ");
    scanf(" %[^\n]s",str);

    Pattern(str);

    printf("%s",str);
    return 0;
}
