#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,d;
    printf("Enter 1st point's x co-ordinate: ");
    scanf("%f",&x1);
    printf("Enter 1st point's y co-ordinate: ");
    scanf("%f",&y2);
    printf("Enter 2nd point's x co-ordinate: ");
    scanf("%f",&x2);
    printf("Enter 1st point's x co-ordinate: ");
    scanf("%f",&y2);

    d=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));

    printf("%.2f",d);
    getch();
    return 0;

}
