#include <stdio.h>

int main()
{
    int m=0,i;
    char a[1000];
    printf("Enter your name: ");
    gets(a);

    for(i=0;i<1000;i++)
    {
     if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='O'||a[i]=='U'||a[i]=='I'||a[i]=='E')
     m++;
     if(a[i]==NULL)
     break;
    }
    printf("%d",m);

    return 0;
}
