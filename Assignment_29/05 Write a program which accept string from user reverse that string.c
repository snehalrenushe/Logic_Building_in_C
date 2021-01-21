#include<stdio.h>
#include<string.h>


void StrRev(char *instr,char *outstr)
{
    int i = 0, j = 0;

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
    char cSrc[20] = "";
    char cDest[20] = "";

    printf("\n Enter a string := ");
    gets(cSrc);

    StrRev(cSrc,cDest);

    printf("\nSource string is %s",cSrc);
    printf("\nReverse string is %s",cDest);

    return 0;
}


