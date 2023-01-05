//MAX CONSECUTIVE OCCURRENCE OF A NUMBER.

#include <stdio.h>

int main()
{
    int n,max;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n],count_arr[n];
    printf("Enter the elements of the array :\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<=n; i++){
        int count=0;
        for(int j=1; j<=n; j++){
            if(arr[i]==arr[j])
                count++;   
         }
        count_arr[i]=count;
    }
    max=count_arr[1];
    for(int i=1;i<=n; i++){
        if(count_arr[i]>max)
            max=count_arr[i];
    }
    printf("Ans:%d",max);
}
