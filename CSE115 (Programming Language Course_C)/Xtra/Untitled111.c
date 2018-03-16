#include <stdio.h>

int main()
{
    char a; int x;
    x=a;

    printf("Enter a word\a\n");
    scanf("%c",&a);

    printf("\vYour word is %c\a\n",a);

    return 0;
}
