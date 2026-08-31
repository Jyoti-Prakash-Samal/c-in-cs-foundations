#include <stdio.h>
int main() {
    int age=18;
    char grade='A';
    float pi=3.14f;
    double precise_pi=3.141592653589793;
    printf("Primitive data types and their sizes in bytes:\n");
    printf("Integer: %d | Size: %zu bytes\n", age, sizeof(age));
    printf("Character: %c | Size: %zu bytes\n", grade, sizeof(grade));
    printf("Float: %.6f | Size: %zu bytes\n", pi, sizeof(pi));
    printf("Double: %.15lf | Size: %zu bytes\n", precise_pi, sizeof(precise_pi));
}