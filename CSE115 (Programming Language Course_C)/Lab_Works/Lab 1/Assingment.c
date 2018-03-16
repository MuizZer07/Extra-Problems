#include <stdio.h>

int main()

{
    int x,y,z,sec,min,hrs;

    printf("Enter your time in seconds\n");
    scanf("%d",&x);

    hrs=x/3600;
    min=x%3600/60;
    sec=x%3600%60;

    printf("Your time is ");
    printf(" %d hours",hrs);
    printf(" %d minutes",min);
    printf(" %d seconds",sec);

    return 0;


}
