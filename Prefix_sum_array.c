//PRINTING ARRAY OF PREFIX SUMS OF A GIVEN ARRAY


#include <stdio.h>

int main()
{
    int n,max;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int m=n;
    int arr[n],sum_arr[n];
    sum_arr[0]=0;
    printf("Enter the elements of the array :\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
        sum_arr[i]=sum_arr[i-1]+arr[i];
    }
    printf("Resultant array: ");
    for(int i=1; i<=n; i++){
        printf("%d, ",sum_arr[i]);
    }
}
