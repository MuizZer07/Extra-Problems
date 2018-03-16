#include <stdio.h>

int main()
{
    int x,y1,y2;

    printf("Enter value of x: ");
    scanf("%d",&x);

    y1=(x*x)+(2*x)+5;
    y2=(x*x*x)+(3*x*x)+(4*x)+10;

    printf("y1 is %d\n",y1);
    printf("y2 is %d\n",y2);




    return 0;
}
