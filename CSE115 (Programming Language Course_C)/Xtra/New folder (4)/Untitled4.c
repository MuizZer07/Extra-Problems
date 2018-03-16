#include <stdio.h>

int main()

{
    int i,a[5],max=-10000;

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]>max)
        a[i]=max;
    }
    printf("\n %d",max);



    return 0;
}
