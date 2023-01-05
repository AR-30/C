/*Given an array of size n. ith elements of array represents number of apples hold by ith student.
Given a number  m which is minimum number of apples each student should have.
Find the total number of apples which needs to be distributed to students to complete the
minimum requirement.*/


#include <stdio.h>

int main()
{
    int n,m,total=0;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the minimum no. of apples each student should have: ");
    scanf("%d",&m);
    
    printf("Enter the elements of the array :\n");
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]<m)
            total=total+m-arr[i];
    }
    
    printf("Total no. of apples needed to be distributed to meet the min. requirement of apples: %d",total);
}
