/*        1 
        2 1 2 
      3 2 1 2 3 
    4 3 2 1 2 3 4     */
    
#include <stdio.h>

int main() {
    int n = 4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            printf("  ");
        }
        for(int j=i+1; j>0; j--){
            printf("%d ",j);
        }
        for(int j=2; j<=i+1; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
