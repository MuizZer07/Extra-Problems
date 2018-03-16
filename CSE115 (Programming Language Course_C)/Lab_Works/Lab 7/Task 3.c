#include <stdio.h>
void myStrlen(int *a)
{
    int i;
    for(i=0;i<1000;i++)
   {
       if(a[i]==NULL)
       break;
   }
   printf("%d",i);
}
int main()
{

    char a[1000],*s;
    printf("Enter a string: ");
    gets(a);
    s=&a;

    myStrlen(s);



    return 0;
}
