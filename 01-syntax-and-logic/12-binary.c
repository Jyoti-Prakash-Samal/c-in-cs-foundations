#include <stdio.h>
int main(void){
    int n,i;
    printf("Enter a number to print its binary representation\n");
    scanf("%d", &n);
    printf("Binary representation of %d is: ", n);
    for(i=31;i>=0;i--){
        printf("%d", (n>>i) & 1);
    }
    printf("\n");
    return 0;
}