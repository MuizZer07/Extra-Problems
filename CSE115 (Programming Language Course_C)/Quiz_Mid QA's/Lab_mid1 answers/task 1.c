#include <stdio.h>

int main()

{
    int x,y,z;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&y,&z);

    printf("\nThe numbers that are divisible by 3: ");


    if(x%3==0)
        printf("\n%d",x);
    if(y%3==0)
        printf("\n%d",y);
    if(z%3==0)
        printf("\n%d",z);


    return 0;
}
