#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    int (*operations[])(int, int) = {add, subtract, multiply};
    
    int choice;
    int x = 20, y = 5;
    
    printf("Operations available on %d and %d:\n", x, y);
    printf("0: Add, 1: Subtract, 2: Multiply\n");
    printf("Enter choice (0-2): ");
    scanf("%d", &choice);
    
    if (choice >= 0 && choice <= 2) {
        int result = operations[choice](x, y);
        printf("Result: %d\n", result);
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}