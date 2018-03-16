#include <stdio.h>

int main()
{
    int year,x,y,age;
    printf("Enter your birth year: ");
    scanf("%d",&year);


    printf("What do you want?\n\n Press 1 to see your birth year is a leap year or common year.\n Press 2 to see you are 18 years old or above or not above.\n\n");
    scanf("%d",&x);

    switch(x)
    {
      case 1:
          if(year%4==0)
          {
           if(year%400==0||year%100!=0)
           printf("\nYour birth year is a leap year.\n");
           else
           printf("\nYour birth year is a common year.\n");
          }
          else
           printf("\nYour birth year is a common year.\n");
           break;

      case 2:

         {
          printf("\nEnter current year: ");
          scanf("%d",&y);

          age=y-year;


         }
          if(age>=18)
          {
              if(age>18)
              printf("\nYou are above 18.\n");
              else
              printf("\nYou are 18.\n");
          }
          else
            printf("\nYou are not above 18.\n");
            break;


      default:
        printf("\nYour option is invalid.\n");

    }

    return 0;
}
