#include <stdio.h>

int main()
{
  int x,y,year,age,a;
  printf("Enter your birth year: ");
  scanf("%d",&year);
  printf("You were born in %d.\n\n", year);

  x=((year%4==0)&&(year%100)!=0||(year%400==0));
  switch(x)
     {
     case 1:
     printf("\aYour birth year (%d) is leap year. \n",year);
     break;
     case 0:
     printf("Your birth year (%d) is a common year. \n",year);
     break;
     }
   printf("\nEnter the current year: ");
   scanf("%d",&y);
   age=y-year;
   a=age/18;

   switch(a)
    {
     case 0:
     printf("\nYour age is under 18. \n");
     break;
     default:
         {
          if(age==18)
            printf("\nYour age is 18. \n");
          else
            printf("\nYour age is above 18. \n");
         }
      }
        getch();
        return 0;
}
