#include <stdio.h>

int main()

{
    int i,j,n;


     printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(i=n;i<=n;i--)
    {
      for(j=1;j<i;j++)
        {
            printf(" *");
        }
    if(i<0)
    break;
        printf("\n");
    }



    return 0;
}

