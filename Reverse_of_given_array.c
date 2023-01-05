//REVERSE ARRAY OF THE GIVEN ARRAY


#include <stdio.h>

int main()
{
    int n,max;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int m=n;
    int arr[n],rev_arr[n];
    printf("Enter the elements of the array :\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
        rev_arr[m]=arr[i];
        m--;
    }
    printf("Reverse array: ");
    for(int i=1; i<=n; i++){
        printf("%d ",rev_arr[i]);
    }
}
