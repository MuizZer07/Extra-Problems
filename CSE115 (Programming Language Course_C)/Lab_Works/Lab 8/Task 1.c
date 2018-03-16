#include <stdio.h>
void valueplusten(int n)
{

    n=n+10;

}
void referenceplusten(int *n)
{

    *n=*n+10;

}
int main()
{
    int n,*a;
    a=&n;

    printf("Enter an integer: ");
    scanf("%d",&n);

    valueplusten(n);

    printf("\nCall by value: %d",n);

    referenceplusten(a);

    printf("\nCall by reference: %d",n);


    return 0;
}
