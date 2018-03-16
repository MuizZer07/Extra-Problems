#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
    int i,ln,space=0;
    ln=strlen(s);
    printf("\n\nReverse string: ");
    for(i=0;i<ln;i++)
    {
        if(s[i]==' '||s[i]==NULL)
        space++;
    }
    printf("%d",space);
}
int main()
{
    char str[1000];
    printf("Enter a string: ");
    gets(str);

    reverse(str);

    return 0;
}
