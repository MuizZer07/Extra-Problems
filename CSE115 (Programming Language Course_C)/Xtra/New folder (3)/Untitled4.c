

int main()
{
    int a[1000][1000],b[1000][1000],c[1000][1000];
    int i,j,rowsA,collumnsA,rowsB,collumnsB,sum=0;

    printf("Enter a matric's row number: ");
    scanf("%d",&rowsA);
    printf("Enter a matric's collumn number: ");
    scanf("%d",&collumnsA);
    printf("Enter b matric's row number: ");
    scanf("%d",&rowsB);
    printf("Enter b matric's collumn number: ");
    scanf("%d",&collumnsB);

for(i=0;i<rowsA;i++)
    {
        for(j=0;j<collumnsA;j++)
        {
            printf("Enter a[%d][%d]:",a[i][j]);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<rowsA;i++)
    {
        for(j=0;j<collumnsA;j++)
        {
            printf("Enter b[%d][%d]:",b[i][j]);
            scanf("%d",&b[i][j]);
        }
    }

   if(rowsA!=rowsB||collumnsA!=collumnsB)
    printf("\nnot valid");
    else
    {
     for(i=0;i<rowsA;i++)
     {
         for(j=0;j<collumnsA;j++)
         {
         sum+=a[i][j]*b[i][j];
         sum=c[i][j];
         printf("%d",c[i][j]);
         }
     }
     printf("\n");
    }





    return 0;
}
