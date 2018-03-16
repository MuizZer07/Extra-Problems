#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter a number: ");
    scanf("%d",&x);

    if(x%2==0)
    printf("\n%d is an even number. \n",x);
    else
    printf("\n%d is an odd number. \n",x);




    return 0;
}
