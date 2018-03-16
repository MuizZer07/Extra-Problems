#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);

    int c;
    printf("What do you want?\n");
    printf("Press 1 for addition\npress 2 for subtraction\npress 3 for multiplication\n\n");
    scanf("%d",&c);

    switch(c)
    {  int add,sub,mul;
        case 1:
            add=x+y;
            printf("\nYour result of addition is %d\n",add);
            break;
        case 2:
            sub=x-y;
            printf("\nYour result of subtraction is %d\n",sub);
            break;
        case 3:
            mul=x*y;
            printf("\nYour result of multiplication is %d\n",mul);
            break;
        default: printf("\n\n\a\aSYNTAX ERROR");


    }

    return 0;
}
