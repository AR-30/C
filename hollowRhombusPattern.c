/*    *       
    *   *     
  *       *   
*           * 
  *       *   
    *   *     
      *    */
      
#include <stdio.h>
int main() {
    int n=4;
    int row = 4;
    int col = 2*n-1;
    int k = col/2;
    for(int i=0; i<row-1; i++){
        for(int j=0; j<col; j++){
            if(j== k-i || j==k+i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    for(int i=row-1; i>=0; i--){
        for(int j=0; j<col; j++){
            if(j== k-i || j==k+i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
}
