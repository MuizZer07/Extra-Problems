#include<stdio.h>

void swapNum(int *,int *,int *);

int main()
{
    int n1,n2,n3;

    printf("\nEnter value of n1 : ");
    scanf("%d",&n1);
    printf("\nEnter value of n2 : ");
    scanf("%d",&n2);
    printf("\nEnter value of n3 : ");
    scanf("%d",&n3);

    swapNum(&n1,&n2,&n3);

    printf("n1=%d n2=%d n3=%d\n",n1,n2,n3);

    return 0;
}
void swapNum(int *a,int *b,int *c)
{
    int temp;
    if(*a<*b&&*a<*c&&*b>*c)
    {
        temp=*b;
        *b=*c;
        *c=temp;
    }
    else if(*a<*b&&*a<*c&&*c<*b)
    {
        temp=*b;
        *b=*c;
        *c=temp;
    }
    else if(*b<*a&&*b<*c&&*a<*c)
    {
        temp=*a;
        *a=*b;
        *b=temp;
    }
    else if(*b<*a&&*b<*c&&*c<*a)
    {
        temp=*a;
        *a=*b;
        *b=*c;
        *c=temp;
    }
    else if(*c<*a&&*c<*b&&*a<*b)
    {
        temp=*a;
        *a=*c;
        *c=*b;
        *b=temp;
    }
    else if(*c<*a&&*c<*b&&*b<*a)
    {
        temp=*a;
        *a=*c;
        *c=temp;
    }


}
