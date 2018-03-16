#include <stdio.h>

int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
           {
            printf("  ");
           }
        for(k=0;k<i;k++)
        {
            printf(" *  ");
        }




            printf("\n");
            if(i<0)
            break;
    }








  return 0;
}
