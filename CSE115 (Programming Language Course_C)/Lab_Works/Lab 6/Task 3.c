#include<stdio.h>
#include<stdlib.h>


int main ()
{
    int n;
    printf("Input N: ");
    scanf("%d",&n);

    int arr[n],k;
    printf("\nInput Numbers: ");

    for (k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }

    int i,j,temp,m;

    for (i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if ( arr[i] > arr[j] )
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
                printf("\n");
                for(m=0;m<n;m++)
                    {
                        printf("The maximum value is %d ",arr[m=n-1]);
                    }
                printf("\n");


    return 0;
}
