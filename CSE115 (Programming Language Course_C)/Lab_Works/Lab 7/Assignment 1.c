
#include<stdio.h>
#include<string.h>
void reverse_string(char str[])
{
    int i,j,ln;
    char temp;
    ln=strlen(str);
    for(i=0,j=ln-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("Reverse : ");
    printf("%s\n",str);

}
main()
{
    char str[100];
    printf("Enter  a string: ");
    gets(str);
    reverse_string(str);
}
