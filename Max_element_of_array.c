//FINDING MAXIMUM OF AN ARRAY.


#include <stdio.h>

int main()
{
    int n, max;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    max=arr[1];
    for(int i=1;i<=n; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("Maximum of the array:%d",max);
}
