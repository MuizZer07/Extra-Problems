#include <stdio.h>

int main()
{
    int n,i,fac;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1,fac=1;i<=n;i++)
    {
       fac=fac*i;
    }
    printf("The factorial of %d is %d",n,fac);

    return 0;
}
