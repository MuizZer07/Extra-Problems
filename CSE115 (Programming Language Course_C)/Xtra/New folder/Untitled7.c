#include <stdio.h>

int main()
{
    int n,i,sum;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    printf("The list of odd numbers up to %d is: ",n);

    for(i=0,sum=0;i<=n;i++)
    {
        printf(" %d",i);

        sum=sum+i;

    }
    printf("\n\nThe sum is: %d ",sum);




    return 0;
}

