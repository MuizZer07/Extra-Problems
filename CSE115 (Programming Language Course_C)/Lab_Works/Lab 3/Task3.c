#include <stdio.h>

int main()
{
    int n,i,sum;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("\n\nThe addition of all integer numbers up to %d is %d\n\n",n,sum);

    return 0;
}
