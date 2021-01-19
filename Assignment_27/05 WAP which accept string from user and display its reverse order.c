#include<stdio.h>
#include<string.h>

int Reverse(char *instr,char *outstr)
{
    int i = 0,j = 0;

    while(instr[i] != '\0')
    {
        i++;
    }

    i = i - 1;

    while(i >= 0)
    {
        outstr[j] = instr[i];
        j++;
        i--;
    }

    outstr[j] = '\0';
    return 0;
}

int main()
{
    char cSrc[20]=" ";
    char cDest[20]=" ";

    printf("\n Enter a String => ");
    gets(cSrc);

    Reverse(cSrc,cDest);

    printf("\n Source String is : %s.",cSrc);
    printf("\n Reverse String is : %s.",cDest);

    return 0;
}
