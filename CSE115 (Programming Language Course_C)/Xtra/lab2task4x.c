#include <stdio.h>

int main()
{
    float x,y;
    printf("Enter the value of x,y: ");
    scanf("%.2f%.2f",&x,&y);


    int c;
    printf("What do you want?\n");
    printf("Press 1 for addition\npress 2 for subtraction\npress 3 for multiplication\n");
    scanf("%d",&c);

    switch(c)
    {  float add,sub,mul;
        case 1:
            add=x+y;
            printf("Your result of addition is %.2f\n",add);
            break;
        case 2:
            sub=x-y;
            printf("Your result of subtraction is %.2f\n",sub);
            break;
        case 3:
            mul=x*y;
            printf("Your result of multiplication is %.2f\n",mul);
            break;
        default: printf("\n\n\aSYNTAX ERROR");


    }

    return 0;
}

