#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=1;
    printf("The list of odd numbers up to %d is: \n ",n);
    while(i<=n)
   {
    if(i%2!=0)
    printf("\n%d",i);
    i++;
   }




    return 0;
}
