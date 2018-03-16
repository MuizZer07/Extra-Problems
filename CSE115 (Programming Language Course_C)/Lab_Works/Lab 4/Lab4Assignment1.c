#include<stdio.h>


int main()
{
    int i,ans=0,x=0,n;

    printf("Enter an integer: ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        if(x==0)
        {
            ans=ans-i*i;
            x=1;
        }
        else
        {
            ans=ans+i*i;
            x=0;
        }

    }

    printf("\n\nThe result of the series is %d",ans);


    return 0;
}
