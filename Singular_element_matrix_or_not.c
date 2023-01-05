//TO CHECK WHETHER THE ARRAY CONTAINS ONE TYPE OF INTEGER ONLY OR NOT


#include <stdio.h>

int main()
{
    int n, count=0;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the elements of the array :\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=1; j<=n; j++){
        if(arr[1]==arr[j])
            count++;
    }
    if(count==n)
        printf("The array contains single type of elements.");
    else
        printf("The array does not contain single type of elements.");
}
