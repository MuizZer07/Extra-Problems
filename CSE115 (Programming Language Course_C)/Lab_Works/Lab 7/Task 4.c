#include <stdio.h>

int main()
{
    int i;
    char a[1000];
    printf("Enter a word: ");
    gets(a);

    for(i=0;i<1000;i++)
    {
        if(a[i]==NULL)
        break;

    }
    printf("%d",i);

    return 0;
}
