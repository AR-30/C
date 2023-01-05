//FINDING AVERAGE OF AN ARRAY


#include <stdio.h>

int main()
{
    int sum=0, avg, n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array :");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("Average = %d",avg);
}
