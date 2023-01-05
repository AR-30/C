//FINDING OUT NUMBER OF ODD AND EVEN INTEGERS IN A GIVEN ARRAY


#include <stdio.h>

int main()
{
    int odd=0, even=0, n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array :");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=1; j<=n; j++){
        if(arr[j]%2==0)
            even++;
        else
            odd++;
    }
    printf("Count of odd no.: %d\nCount of even no.:%d",odd,even);
}
