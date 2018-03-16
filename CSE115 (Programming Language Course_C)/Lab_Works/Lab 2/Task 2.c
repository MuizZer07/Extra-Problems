#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter your three numbers gradually:\n");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y)
    {
        if(x>z)
            printf("\aYour largest number is: %d\n",x);
        else
            printf("\aYour largest number is: %d\n",z);
    }
    else
    {
        if(y>z)
            printf("\ayour largest number is: %d",y);
        else
            printf("\aYour largest number is: %d",z);
    }

return 0;
}
