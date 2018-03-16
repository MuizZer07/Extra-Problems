#include <stdio.h>
void mysort(int a[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(i=9;i<10;i--)
    {

        printf("%d ",a[i]);
        if(i<=0)
        break;
    }
}
int main()
{
    int a[1000],i;
    printf("Enter 10 numbers: ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    mysort(a);

    return 0;
}
