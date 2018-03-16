#include <stdio.h>
#define pi 3.1416


float getArea(float a)
{
    float area;
    area=pi*a*a;
    return area;
}







int main()
{
    float r,ans;
    printf("Enter the radius: ");
    scanf("%f",&r);

    ans=getArea(r);
    printf("The area of the circle is: %f",ans);


    return 0;
}
