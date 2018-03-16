#include <stdio.h>

int main()

{
   int i,x=2,y,n=5;
   for(i=1,y=1;i<=n;i++)
    {
        printf("%d",x);

        y=y*x;

    }
    printf("\n%d",y);
  return 0;
}
