#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x, y;
    
    printf("Enter the first number: ");
    scanf("%d", &x);
    
    printf("Enter the second number: ");
    scanf("%d", &y);
    
    printf("\nBefore swapping: x = %d, y = %d\n", x, y);
    
    swap(&x, &y);
    
    printf("After swapping: x = %d, y = %d\n", x, y);
    
    return 0;
}