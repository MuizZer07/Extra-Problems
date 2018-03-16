#include <stdio.h>

float getAvg(int a)
{
    int i,x;
    float avg,sum=0;

    for(i=1;i<=a;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    avg=sum/a;

    return avg;
}


int main()
{
    int n;
    float avg;
    printf("Enter a number: ");
    scanf("%d",&n);

    avg=getAvg(n);
    printf("\nThe average of %d numbers is: %.3f",n,avg);


    return 0;
}
