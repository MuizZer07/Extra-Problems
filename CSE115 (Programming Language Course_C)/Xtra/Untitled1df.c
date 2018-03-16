#include <stdio.h>
main()
{
    char name []= "a",age []="b",occ []="c",nat []="d";

    printf("Enter your name: ");
    scanf("%s",name);
    printf("\nAge: ");
    scanf("%s",age);
    printf("\nOccupation: ");
    scanf("%s",occ);
    printf("\nNationality: ");
    scanf("%s",nat);

    printf("\nYour Bio-data is ready. Please wait.\n\n--------\n--------\n\n");
    printf("Name: %s\n",name);
    printf("Age: %s\n",age);
    printf("Occupation: %s\n",occ);
    printf("Nationality: %s\n",nat);

    return 0;
}
