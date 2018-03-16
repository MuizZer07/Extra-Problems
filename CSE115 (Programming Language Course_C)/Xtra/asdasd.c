#include <stdio.h>
main()
{
    char name1[100];
    char age[300];
    char occ[100];
    char nat[100];
    char bld[50];
    char dob[150];

    printf("Enter your full name: ");
    scanf("%s",&name1);
    printf("\nAge: ");
    scanf("%s",&age);
    printf("\nOccupation: ");
    scanf("%s",&occ);
    printf("\nNationality: ");
    scanf("%s",&nat);
    printf("\nBlood group: ");
    scanf("%s",&bld);
    printf("\nDate of Birth(dd-mm-yy): ");
    scanf("%s",&dob);

    printf("\nYour Bio-data is ready. Please wait.\n\n--------\n--------\n\n");


    printf("Name: %s \n",name1);
    printf("Age: %s\n",age);
    printf("Occupation: %s\n",occ);
    printf("Nationality: %s\n",nat);
    printf("Blood group: %s (ve)\n",bld);
    printf("Date of birth: %s (dd-mm-yy)",dob);



    return 0;
}
