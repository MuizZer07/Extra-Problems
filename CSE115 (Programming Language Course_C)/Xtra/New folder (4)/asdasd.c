#include <stdio.h>

int res(int i)
{
  if(i<=60)
    printf("Passed.");
    return 1;
  else
    printf("Failed.");
    return 0;

}
struct data
{
    char name[1000];
    char gender[100];
    int ID;
    int quiz;
    int ass;
};
int main()
{
    int n,i,j,sum[100];
    struct data s[1000];
    char ch;

    FILE *fp=fopen("Students progress.txt","w");

    printf("Total students: ");
    scanf("%d",&n);
    scanf("%c",&ch);

    for(i=1;i<=n;i++)
    {
        printf("\nstudent: %d\n",i);
        printf("Name: ");
        gets(s[i].name);
        printf("Gender: ");
        gets(s[i].gender);
        printf("ID: ");
        scanf("%d",&s[i].ID);
        printf("Quiz Marks: ");
        scanf("%d",&s[i].quiz);
        printf("Assignment Marks: ");
        scanf("%d",&s[i].ass);
        scanf("%c",&ch);


        sum[i]=s[i].quiz+s[i].ass;
        j=res(sum);



        fprintf(fp,"Student no. %d\n",i);
        fprintf(fp,"Name: %s\n",s[i].name);
        fprintf(fp,"Gender: %s\n",s[i].gender);
        fprintf(fp,"ID: %d\n",s[i].ID);
        fprintf(fp,"Quiz marks: %d\n",s[i].quiz);
        fprintf(fp,"Assignment marks: %d\n",s[i].ass);
        fprintf(fp,"Total: %d\n",sum[i]);
        if(j==1)
        fprintf(fp,"Passed.");
        else
        fprintf(fp,"Failed.");

    }

    fclose(fp);

    FILE *f=fopen("Students Progress.txt","r");



    return 0;
}
