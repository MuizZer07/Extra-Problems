#include <stdio.h>
int length(char *s)
{
    int a;
    a=strlen(s);
    return a;
}
int main()
{
    int y;
    char str[1000],*s;



    printf("Enter a string: ");
    gets(str);

    s=str;

    y=length(s);
    printf("%d",y);

    return 0;
}
