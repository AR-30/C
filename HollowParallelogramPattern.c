/*  * * * * 
      *     * 
        *     * 
          * * * *   */
      
#include <stdio.h>
int main() {
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+n; j++){
            if(i==0 || j==n+i-1 || i==j || (i==n-1 && j>i) ) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}
