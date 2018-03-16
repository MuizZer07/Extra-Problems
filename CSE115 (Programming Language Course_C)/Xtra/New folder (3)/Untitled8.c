#include <stdio.h>
int swap(int *p)
{
    int temp,i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<i+1;j++)
      temp= p[i];
      p[i]= p[j];
      p[j]= temp;

    }



    return 0;
}
int main()
{
    int a[3],*p=a,y,i,j;


    printf("Enter a: ");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a);
    }

    y=swap(p);

    printf("\n\nEnter a: ");
    for(i=0;i<2;i++)
    {
        printf(" %d ",a[i]);
    }


    return 0;
}
