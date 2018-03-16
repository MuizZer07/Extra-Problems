#include <stdio.h>

int power(int x,int n)
{
   int i,y;
   for(i=1,y=1;i<=n;i++)
    {
        y=y*x;
    }

        return y;
    }


int main()
{
    int x,n,y;
    printf("Enter Value x: ");
    scanf("%d",&x);
    printf("Enter Value n: ");
    scanf("%d",&n);

    y=power(x,n);
    printf("y is %d",y);




    return 0;
}
