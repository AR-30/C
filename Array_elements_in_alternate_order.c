//PRINTING ELEMENTS OF AN ARRAY IN ALTERNATE FASHION.


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Ans:");
    for(int i=1; i<=n; i=i+2){
        printf("%d ",arr[i]);   
    }
    for(int i=2; i<=n; i=i+2){
        printf("%d ",arr[i]);   
    }
}
