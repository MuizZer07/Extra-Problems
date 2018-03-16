#include <stdio.h>

int main()
{
    int x;
    printf("Enter Your number: ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("Your number is Even.\n");
    }
    else
        printf("Your number is Odd.\n");

    return 0;
}
