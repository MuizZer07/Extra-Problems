#include <stdio.h>

int main()
{
    int x,y,a,b,c,d;

    printf("Enter the value of x\n");
    scanf("%d",&x);
    printf("Enter the value of y\n");
    scanf("%d",&y);

    a=x+y;
    b=x-y;
    c=x*y;
    d=x/y;

    printf("The result of addition of x,y is %d\n",a);
    printf("The result of subtraction of x,y is %d\n",b);
    printf("The result of multiplication of x,y is %d\n",c);
    printf("The result of division of x,y is %d\n",d);

    return 0;
}
