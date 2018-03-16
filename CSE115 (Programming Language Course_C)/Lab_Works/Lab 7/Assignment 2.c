#include<stdio.h>
#include<string.h>
main()
{
    char ch[100];
    int ln,i,word=0;
    printf("Enter a sentence: ");
    gets(ch);
    ln=strlen(ch);
    for(i=0;i<=ln+1;i++)
    {
        if(ch[0]=='\0')
        {
            break;
        }
        else if(ch[i]==' '||ch[i]=='\0')
        {
            word++;
        }

    }
    printf("\nTotal words in the sentence: %d",word);

}

