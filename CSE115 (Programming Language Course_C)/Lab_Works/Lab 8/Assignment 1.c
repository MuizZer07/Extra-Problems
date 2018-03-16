#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    char ch[100];
    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","w");

    fgets(ch,100,fp1);
    fputs(ch,fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}
