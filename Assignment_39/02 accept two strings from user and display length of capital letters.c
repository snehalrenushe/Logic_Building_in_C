#include<stdio.h>
#include<conio.h>

void strcap(char * str1, char * str2)
{
    int len1=0,len2=0;

    while(1)
    {
        if(*str1 == '\0' && *str2 == '\0')
        {
            break;
        }
        if(*str1 >= 'A' && *str1 <= 'Z')
        {
            len1++;
        }
        if(*str2 >= 'A' && *str2 <= 'Z')
        {
            len2++;
        }
        str1++;
        str2++;
    }

    printf("\nLength of First String Is %d ",len1);
    printf("\nLength of Second String Is %d ",len2);



    return;
}
int main()
{
    char str1[20]="\0";
    char str2[20]="\0";

    printf("Enter First String => ");
    scanf("%[^\n]s",str1);
    printf("Enter Second String => ");
    scanf(" %[^\n]s",str2);

    strcap(str1,str2);

    return 0;
}
