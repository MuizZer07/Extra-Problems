#include <stdio.h>
#include <string.h>
void string(char str[])
{
    int i,j,ln,y;
    char temp,str1[1000];
    strcpy(str1,str);
    ln=strlen(str);
    for(i=0,j=ln-1;i<j;i++,j--)
    {

        temp=str[i];
        str[i]=str[j];
        str[j]=temp;

    }
    printf("Reverse : ");
    printf("%s\n",str);

    y=strcmp(str1,str);

        if(y==0)
        printf("Your string is a palindrome");
        else
        printf("Your string is a not palindrome");


}
int main()
{
    char str1[1000],str2[1000];

    printf("Enter a string: ");
    gets(str1);

    string(str1);


    return 0;
}
