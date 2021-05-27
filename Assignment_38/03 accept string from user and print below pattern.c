#include<stdio.h>
#include<conio.h>

void Pattern(char *pstr)
{
    int i = 0 , j = 0 , Temp = 0;

    for(Temp = 0 ; pstr[Temp] != '\0' ; Temp++)
    {
        printf("");
    }

    for(i = 0 ; i < Temp ; i++)
    {
        for(j = 0 ; j < Temp ; j++)
        {
            if(i >= j)
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
    char str[30]="\0" , dest[30] = "\0";

    printf("Enter The String : ");
    scanf(" %[^\n]s",str);

    Pattern(str);

    printf("%s",str);
    return 0;
}
