#include <stdio.h>

int main()

{
    int n,i,j,k;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||n+1-i==j)
                {
                    if(i%2==0)
                    printf(" * ");
                    else
                    printf("   ");
                }
            else
                printf("   ");
        }
        printf("\n");
    }




    return 0;
}
