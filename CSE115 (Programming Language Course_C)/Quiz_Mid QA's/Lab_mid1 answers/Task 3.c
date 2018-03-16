#include <stdio.h>

int main()
{
    int i,j,k,n;

    printf("Enter any odd integer(greater than 1) : ");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==j+i)
            printf(" %d",i);
        }
        for(j=1;j<=n;j++)
        {
            if(n-i==j)
            printf(" %d",i);
            else
            printf("  ");
        }

    printf("\n");

    }
    for(i=n;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            k=n-1;
            printf(" %d",k);
        }
    }






    return 0;
}
