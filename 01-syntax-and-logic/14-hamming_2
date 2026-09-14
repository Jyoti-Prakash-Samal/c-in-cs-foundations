#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int temp = n;
    while (temp > 0) {
        if (temp & 1) {
            count++;
        }
        temp = temp >> 1;
    }
    
    printf("Number of set bits in %d is %d\n", n, count);
    return 0;
}