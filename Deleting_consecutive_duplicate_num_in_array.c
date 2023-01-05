//TO DELETE THE CONSECUTIVE DUPLICATE ELEMENTS IN AN ARRAY.


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n], arr2[n];
    
    printf("Enter the elements of the array :\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=1; j<=n; j++){
        if(arr[j]!=arr[j-1]){
            count++;
            arr2[count]=arr[j];
        }
    }
    printf("Required array:");
    for(int i=1; i<=count; i++)
        printf(" %d",arr2[i]);
}
