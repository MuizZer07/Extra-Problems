#include <stdio.h>

int main()
{
     int n,i,flag=0,sum=0;
     printf("Enter N: ");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
       if(flag==0)
        {
       sum=sum+(i);
       printf(" %d ",sum);
       flag=1;
       }

     else
       {
        sum=sum-(i);
        printf(" %d ",sum);
        flag=0;
       }

     }



     return 0;
}
