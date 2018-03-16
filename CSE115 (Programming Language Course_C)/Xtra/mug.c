#include <stdio.h>

float main()
{
    float x,y,z,average;

    printf("Enter value 1:");
    scanf("%f",&x);

    printf("Enter value 2:");
    scanf("%f",&y);

    printf("Enter value 3:");
    scanf("%f",&z);

    average=(x+y+z)/3.0;
    printf("Average: %.2f",average);

    getch();
    return 0;



}
