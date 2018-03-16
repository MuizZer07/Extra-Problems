#include <stdio.h>

int main()
{
    int x,hour,min,sec;
    printf("Enter Your time in seconds: ");
    scanf("%d",&x);

    hour=x/3600;
    min=(x%3600)/60;
    sec=(x%3600%60);



    printf("\nYour Time is %d hours %d minutes %d seconds",hour,min,sec);

    return 0;
}
