/*  5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5 */
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=5;
    n = 2*n-1;
    int k = n/2;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int m = abs(i-k) > abs(j-k) ? abs(i-k) : abs(j-k);
            printf("%d ",m+1);
        }
        printf("\n");
    }
}
