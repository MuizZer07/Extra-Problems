#include <stdio.h>

int main()
{
    int choice;
    printf("Select a number between 1 and 2:\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("You have selected the number 1\n");
        break;
        case 2: printf("you have selected the number 2\n");
        break;
        default: printf("The number you selected is invalid.\n");
}

    return 0;
}
