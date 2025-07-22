/*    *       
    *   *     
  *       *   
* * * * * * *  */
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=4;
    int row = 4;
    int col = 2*n-1;
    int k = col/2;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(j== k-i || j==k+i || i==row-1) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}
