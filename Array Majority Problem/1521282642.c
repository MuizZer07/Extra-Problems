#include <stdio.h>

int getMajority(int arr[], int p, int r, int i, int j){

    int counter1 = 0, counter2 = 0;
    int n = (r - p) + 1;
    int k;
    for(k=p; k<=r;k++){
        if(arr[k] == i)
            counter1++;
        if(arr[k] == j)
            counter2++;
    }
    if(counter1 > n/2)
        return i;
    else if(counter2 > n/2)
        return j;
    else return -'NoNe';
}

int majority(int arr[], int p, int r)
{
   int majorityElement;

   if(p<r){
       int q = (p+r)/2;
       int i = majority(arr, p, q);
       int j = majority(arr, q+1, r);
       majorityElement = getMajority(arr, p, r, i, j);
   }
   else if(p==r)
        majorityElement = arr[p];

   return majorityElement;
}

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];

    int i;
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int p = 0, r = n-1;

    int m = majority(arr, p, r);

    if(m == -'NoNe')
        printf("None");
    else
        printf("%d", m);

    return 0;
}
