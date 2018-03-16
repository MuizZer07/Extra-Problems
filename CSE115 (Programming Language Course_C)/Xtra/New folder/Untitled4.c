#include <stdio.h>

int main()
{
    int x,y,z,add,sub,mul,div;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);

    printf("\nWhat do you want?\n\n Press 1 for addition\n Press 2 for Subtraction\n Press 3 for Multiplication\n Press 4 for division\n\n\n");
    scanf("%d",&z);

    switch(z)
    {
        case 1: add=x+y;
            printf("\n%d + %d = %d.\n",x,y,add);
            break;
        case 2: sub=x-y;
            printf("\n%d - %d = %d.\n",x,y,sub);
            break;
        case 3: mul=x*y;
            printf("\n%d * %d = %d.\n",x,y,mul);
            break;
        case 4: div=x/y;
            printf("\n%d / %d = %d.\n",x,y,div);
            break;
        default:
            printf("\a\a---SYNTAXX ERROR---");
        }



    return 0;
}
