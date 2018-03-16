#include <stdio.h>

float main()
{
    float x,y,a,b,c,d;

    printf("Enter the value of x\n");
    scanf("%f",&x);
    printf("Enter the value of y\n");
    scanf("%f",&y);

    a=x+y;
    b=x-y;
    c=x*y;
    d=x/y;

    printf("The result of addition of x,y is %.2f\n",a);
    printf("The result of subtraction of x,y is %.2f\n",b);
    printf("The result of multiplication of x,y is %.2f\n",c);
    printf("The result of division of x,y is %.2f\n",d);

    return 0;
}
