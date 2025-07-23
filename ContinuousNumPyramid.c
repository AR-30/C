/*     1
      121
     12321
    1234321     */

#include <stdio.h>

int main() {
    int n = 4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            printf(" ");
        }
        for(int j=0; j<i+1; j++){
            printf("%d",j+1);
        }
        for(int j=i; j>0; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
