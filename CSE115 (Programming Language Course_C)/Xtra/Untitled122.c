#include <stdio.h>

double main()

{

    double x,km;
    printf("Enter your distance in kilo meters: \a");
    scanf("%lf",&km);

    x=km*1000;

    printf("Your distance is %lf meters\a\n",x);

    return 0;
}
