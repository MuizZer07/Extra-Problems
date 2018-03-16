#include<stdio.h>

int main()
{
    char name[1000];
    int phn_no;

    printf("Name: ");
    gets(name);
    printf("Phone number: ");
    scanf("%d",&phn_no);

    FILE *fp=fopen(name,"w");

    fprintf(fp,"%d",phn_no);

    fclose(fp);

    return 0;
}
