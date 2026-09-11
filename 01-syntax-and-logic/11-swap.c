#include <stdio.h>
int main(void){
    int a,b;
    printf("Enter two numbers to swap\n");
    scanf("%d %d", &a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("Swapped numbers are: %d and %d", a,b);
}