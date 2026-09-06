#include <stdio.h>
int is_even(int number)
{
    if(number%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void){
    int k;
    printf("Enter a number to check if it is even or odd: ");
    scanf("%d", &k);
    if(is_even(k))
    {
        printf("%d is even\n", k);
    }
    else
    {
        printf("%d is odd\n", k);
    }
    return 0;
}