#include <stdio.h>

int getSum(int a,int b)
{
    int res;
    res=a+b;
    return res;
}
int getSub(int a,int b)
{
    int res;
    res=a-b;
    return res;
}
int getMulti(int a,int b)
{
    int res;
    res=a*b;
    return res;
}
float getDiv(float a,float b)
{
    float res;
    res=a/b;
    return res;
}


int main()
{
    int x,y,z,a,s,m;
    float d;

    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);

    printf("Enter 1 to add:\nEnter 2 to subtract:\nEnter 3 to multiply:\nEnter 4 to divide:\n\n");
    scanf("%d",&z);

    switch(z)
    {
    case 1:
        a=getSum(x,y);
        printf("The addition is %d",a);
        break;
    case 2:
        s=getSub(x,y);
        printf("The subtraction is %d",s);
        break;
    case 3:
        m=getMulti(x,y);
        printf("The multiplication is %d",m);
        break;
    case 4:
        d=getDiv(x,y);
        printf("The divition is %.2f",d);
        break;
    default:
        printf("ERROR");

    }

    return 0;
}
