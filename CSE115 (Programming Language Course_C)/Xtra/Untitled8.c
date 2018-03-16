#include <stdio.h>
int main()
{
    int x;
    printf("Welcome to (c)Zer07 Corporation!\n\n");
    printf("What do you want, sir?\n\n");
    printf("Press 1 to set up an appointment with the CEO.\npress 2 to apply for a visiting permission.\npress 3 to place an order for a cup of coffee.\n\n");
    scanf("%d",&x);

    switch(x)
    {
        case 1:
        printf("\nYou have only two days available to make an appointment with the CEO.\n\nSelect a day:\nPress 1 for Sunday and Press 2 for Monday\n\n");
        int y;
        scanf("%d",&y);
        switch(y)
        {
            case 1: printf("\nYou have selected Sunday.Their are two time slots available on sunday\nPress 1 for 9:00am\nPress 2 for 4:55pm\nAnd put a signature on the guest list.\n\n");
            int z;
            scanf("%d",&z);
            switch(z)
            {
                case 1: printf("\nCongratulations! You have made an appointment with the CEO on sunday at 9:00am. Please be present at CEO's office at time. Thank you.\nAnd please collect your visiting coupon from the reception\n\n");
                break;
                case 2: printf("\nCongratulations! You have made an appointment with the CEO on sunday at 4:55pm. Please be present at CEO's office at time. Thank you.\nAnd please collect your visiting coupon from the reception\n\n");
                break;
                default:
                printf("\nSorry,Sir! Your appointment is not confirmed. Try again.\n");
            }
            break;
            case 2: printf("\nYou have selected Monday.Their are two time slots available on Monday\nPress 1 for 10:30am\nPress 2 for 3:55pm\nAnd put a signature on the guest list.\n\n");
            int a;
            scanf("%d",&a);
            switch(a)
            {
                case 1: printf("\nCongratulations! You have made an appointment with the CEO on Monday at 10:50am. Please be present at CEO's office at time. Thank you.\nAnd please collect your visiting coupon from the reception\n\n");
                break;
                case 2: printf("\nCongratulations! You have made an appointment with the CEO on Monday at 3:55pm. Please be present at CEO's office at time. Thank you.\nAnd please collect your visiting coupon from the reception\n\n");
                break;
                default:
                printf("\nSorry,Sir! Your appointment is not confirmed. Try again.\n");
            }


            break;
        }
        break;






    case 2:
        printf("Your request for visiting has been accepted. Please wait for further conformation.\n\n\n");
        printf("How much time you need for visiting? (hh-mm)\n");
        int b,c;
        scanf("%d%d",&b,&c);
        printf("Your request for %d hour(s) %d minutes visitation has been accepted. Please follow the map and instructions wriiten in the passage-way\n",b,c);
        break;
    case 3:
        printf("Your order for coffee has been placed. your coffee will be served in 2 minutes. Thanks for your patience. Enjoy your coffee.\n");
        break;
    default:
        printf("Your option is invalid. Please call to 012 from the exchange for assistance. Thank you.\n");
        break;

    }

    getch();
return 0;

}

