#include<stdio.h>
#include<stdlib.h>

int ascending (int n)
    {
    int arr[n],k;

    printf("\nInput Numbers: ");

    for(k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }


    int temp,i,j,store;

    for (i=0;i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }


            }
        }
                printf("\nDescending Order: ");
                for(i=n-1;i>=0;i--)
                {
                    printf("%d ",arr[i]);
                }
                printf("\n");


    return store;
}


int main ()
{
    int i,j,n,store;
    printf("Input N: ");
    scanf("%d",&n);

    store=ascending (n);

    return 0;
}
