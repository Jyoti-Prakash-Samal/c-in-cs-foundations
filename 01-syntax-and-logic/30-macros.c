#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define PI 3.14159

int main(void) {
    int x, y;
    float radius;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Maximum: %d\n", MAX(x, y));

    printf("Enter circle radius: ");
    scanf("%f", &radius);
    printf("Area: %.2f\n", PI * radius * radius);

    return 0;
}