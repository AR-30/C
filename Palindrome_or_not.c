// CHECKS WHETHER THE ENTERED NUMBER IS PALINDROME OR NOT.

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int b=n;
    int reverse_num = 0;
    while(b!=0){
        reverse_num = (reverse_num*10) + (b%10);
        b=b/10;
    }
    if(reverse_num==n)
        printf("it is a palindrome");
    else
        printf("it is not a palindrome");
}
