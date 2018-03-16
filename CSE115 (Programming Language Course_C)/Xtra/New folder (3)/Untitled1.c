#include <stdio.h>
void series(int n)
{
    int i;
    double div;
    for(i=1;i<=n;i++)
    {
        if(i==1)
            printf("\n 1 +");
        else if (i==n)
            printf(" 1/%d",i);
        else
            printf(" 1/%d +",i);
    }

}

int main()

{
    int n;

    printf("enter n: ");
    scanf("%d",&n);

    series(n);

    return 0;
}
