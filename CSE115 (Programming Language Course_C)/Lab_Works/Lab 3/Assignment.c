#include <stdio.h>

int main()
{
    int i,j,n=3;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
           {
            printf(" %d",j);
           }
            printf("\n");
    }
   for(i=n;i<=n;i--)
    {
        if(i<0)
        break;
        for(j=1;j<i;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }


    return 0;
}
