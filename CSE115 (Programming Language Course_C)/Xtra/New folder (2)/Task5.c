#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter a value: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i-1;j++)
        {
        if(i%2==0)
        printf("O");
        else
        printf("-");
       }
        printf("\n");
    }


    return 0;
}
