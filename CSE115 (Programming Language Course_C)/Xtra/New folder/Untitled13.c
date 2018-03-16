#include <stdio.h>

int main()
{
    int i,j,n;

    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            if(j==1||j==n+1-i)
            printf("%d   ",i);
            else
            printf("   ");
        }


        printf("\n\n");
    }



    return 0;
}
