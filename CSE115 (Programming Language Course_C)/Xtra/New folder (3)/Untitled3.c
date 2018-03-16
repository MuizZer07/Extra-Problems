#include <stdio.h>
void max(int a[],int n)
{
    int i,max=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("\nThe maximum value is: %d", max);

}
void min(int a[],int n)
{
    int i,min=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("\nThe minimum value is: %d", min);

}
void avg(int a[],int n)
{
    int j,sum=0;
    float avg;

    for(j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    avg=sum/n;
    printf("\nThe average value is: %.2f", avg);

}


int main()
{
    int n,a[1000],i;
    printf("Enter how many numbers you want to put: ");
    scanf("%d",&n);
    printf("\nEnter %d numbers: ",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max(a,n);
    min(a,n);
    avg(a,n);


    return 0;
}
