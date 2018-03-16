#include <stdio.h>

int main()
{
    int degree;
    float radian,a,b,c;
    printf("Enter angle(degree): ");
    scanf("%d",&degree);

    radian=(degree*3.14159)/180;

    printf("Radian: %.3f\n\n",radian);
    a=sin(degree);
    b=cos(degree);
    c=atan(degree);

    printf("sin(%d)=%.3f\n",degree,a);
    printf("cos(%d)=%.3f\n",degree,b);
    printf("atan(%d)=%.3f\n",degree,c);
    getch();
    return 0;

}
