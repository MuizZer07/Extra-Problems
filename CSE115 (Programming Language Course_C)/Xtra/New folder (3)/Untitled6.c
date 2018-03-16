#include <stdio.h>

struct data
{
    char name[1000];
    char gender[100];
    char occ[100];
    int age;
    char bld[100];
};

int main()
{
    typedef struct data s;
    s p[100];
    int n,i;
    char ch,ch1;

    FILE *fp=fopen("Bio-data.txt","w");

    printf("Total Bio-Data: ");
    scanf("%d",&n);
    scanf("%c",&ch);

   for(i=1;i<=n;i++)
   {
    printf("\n\nBio-data %d",i);
    printf("\nName: ");
    gets(p[i].name);
    printf("Gender: ");
    gets(p[i].gender);
    printf("Occupation: ");
    gets(p[i].occ);
    printf("Age: ");
    scanf("%d",&p[i].age);
    scanf("%c",&ch1);
    printf("Blood group: ");
    gets(p[i].bld);


    fprintf(fp,"Bio-data: %d",i);
    fprintf(fp,"\nName: %s",p[i].name);
    fprintf(fp,"\nGender: %s",p[i].gender);
    fprintf(fp,"\nOccupation: %s",p[i].occ);
    fprintf(fp,"\nAge: %d",p[i].age);
    fprintf(fp,"\nBlood group: %s",p[i].bld);
    fprintf(fp,"\n\n");

   }


    return 0;
}
