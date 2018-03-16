#include <stdio.h>
#include <stdlib.h>

   struct nameandmarks{
   char name[100];
   int mark;

};
int main()
{

    struct nameandmarks a[100];
    int i,n;
    scanf("%d",&n);
    FILE *fp;
    fp=fopen("pera.txt" , "a");

    for(i=0;i<n;i++)
    {

    printf("Enter %d student's name: \n",i+1);
    fflush(stdin);
    scanf("%s",a[i].name);
    printf("Enter %d student's mark",i+1);
    scanf("%d",&a[i].mark);

    fprintf(fp,"%s----> %d\n",a[i].name,a[i].mark);

    }


fclose(fp);

return 0;
}

