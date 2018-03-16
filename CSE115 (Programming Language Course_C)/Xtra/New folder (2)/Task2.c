#include <stdio.h>

double Fahrenheit(double C)
{
    double Fahr;
    Fahr=(C-273.15)*1.8+32;
    return Fahr;
}

double Kelvin(double F)
{
    double kel;
    kel=(F-32)*5/9+273.15;
    return kel;
}



double main()


{
    double F,C,kel,fahr;
    printf("Enter Kelvin value: ");
    scanf("%lf",&C);
    printf("Kelvin        Fahrenheit\n-----         ----------\n");
    printf("%.2lf        ",C);

    fahr=Fahrenheit(C);
    printf("%.2lf",fahr);

    printf("\nEnter Fahrenheit value: ");
    scanf("%lf",&F);
    printf("Fahrenheit        Kelvin\n-----         ----------\n");
    printf("%.2lf        ",F);

    kel=Kelvin(F);
    printf("%.2lf",kel);




    return 0;
}
