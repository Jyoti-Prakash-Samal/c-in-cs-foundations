#include <stdio.h>
int main(void)
{
    int p;
    do
    {
        printf("Enter the amount to be withdrawn, Note: The amount should be positive and divisible by 100\n");
scanf("&d" , &p);
    } while(p<0 || p%100!=0)
    printf("Dispensing: %d" , &p);
    return 0;
}