#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter an integer number: ");
    scanf("%d",&n);
    printf("The list of odd numbers up to %d is: ",n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        printf(" %d",i);

    }




    return 0;
}
