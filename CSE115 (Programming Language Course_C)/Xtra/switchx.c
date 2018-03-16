#include <stdio.h>
int main()
{
    int x;
    printf("Welcome to (c)Zer07 Corporation!\n");
    printf("What do you want, sir?\n");
    printf("Press 1 to set up an appointment with the CEO\npress 2 to apply for a visiting permission\npress 3 to place a order for a cup of coffee\n");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
        printf("You have only two days available to make an appointment with the CEO.\n");
        break;
    case 2:
        printf("Your request for visiting has been accepted. Please wait for further conformation.\n");
        break;
    case 3:
        printf("Your order for coffee has been placed. your coffee will be surved in 2 minutes.\n");
        break;
    default:
        printf("Your option is invalid. Please call to 012 from the exchange for assistance. Thank you.\n");
        break;

    }
return 0;

}

