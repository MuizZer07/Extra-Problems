#include <stdio.h>

void getAverage(int *a)
{
    float avg;
    int sum=0,i;
    for(i=0;i<6;i++)
    {
      sum=sum+a[i];

    }
    avg=sum/6;
    printf("\nAverage: %.2f",avg);

}

int main()
{
    int i,a[6],A,*s;
    s=&a;
    printf("Enter 6 integers: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    getAverage(s);


    return 0;
}
