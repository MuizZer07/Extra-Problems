#include <stdio.h>

int showPattern(int x)
{
    int i,j;

    for(i=1;i<=x;i++)
    {

        for(j=x;j<=x;j--)
        {
        if(j<=0)
        break;
        if(i==j||x+1-i==j)
            printf(" %d",j);
            else
            printf("  ");
        }
        printf("\n");

    }
}





int main()
{
    int n,x;
    printf("Enter a number: ");
    scanf("%d",&n);

    x=showPattern(n);


}

