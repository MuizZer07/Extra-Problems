#include <stdio.h>
#include <stdlib.h>

int isPrime(int n);
int main()
{
    int n,y;
    printf("Enter a positive number: ");
    scanf("%d",&n);

    y=isPrime(n);
    if(y==0)
        printf("\nNumber is a prime number.\n");
    else
        printf("\nNumber is not a prime number.\n");


    return 0;
}

int isPrime(int n)
{
    int i,z;
    for(i=2;i<=n/2;i++)
     {
         if(n%i==0)
         {
            z=1;
            break;
         }

     }
    if(z==0)
     return 0;
    else
     return 1;

}
