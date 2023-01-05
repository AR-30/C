//MAX CONSECUTIVE OCCURRENCE OF A NUMBER.

#include <stdio.h>

int main()
{
    int n,max;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n],count_arr[n];
    printf("Enter the elements of the array :\n");
    for(int i=1; i<=n; i++){       //taking the array elements
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<=n; i++){       //fixing the element to compare
        int count=0;
        for(int j=1; j<=n; j++){   //going through the array
            if(arr[i]==arr[j])     //checking for the number and count the occurence
                count++;   
         }
        count_arr[i]=count;        //making an array out of number of counts
    }
    max=count_arr[1];
    for(int i=1;i<=n; i++){        //finding the max of the count of occuremces.
        if(count_arr[i]>max)
            max=count_arr[i];
    }
    printf("Ans:%d",max);
}
