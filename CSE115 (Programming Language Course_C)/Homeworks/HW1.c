#include <stdio.h>

int main()
{
    int i,j;

    for(i=5;i<=5;i--)
    {
        if(i<0)
        break;
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
