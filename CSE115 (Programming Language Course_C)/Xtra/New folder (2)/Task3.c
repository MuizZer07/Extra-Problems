#include <stdio.h>
#include <math.h>
#define pi 3.1416

double degree_to_radian(double degree)
{

    double radian;
    radian=(pi*degree)/180;
    return radian;
}

double area(double radian,double a,double b)
{
   double area;
   area=0.5*a*b*sin(radian);
   return area;
}




double main()
{
     double a,b,degree,radian,area1;

     printf("Enter side a: ");
     scanf("%lf",&a);
     printf("Enter side b: ");
     scanf("%lf",&b);
     printf("Enter angle in degree: ");
     scanf("%lf",&degree);

     radian=degree_to_radian(degree);
     area1=area(radian,a,b);
     printf("The area of the triangle is: %.2f",area1);

    return 0;
}
