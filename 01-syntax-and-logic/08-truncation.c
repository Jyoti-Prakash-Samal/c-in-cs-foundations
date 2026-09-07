#include <stdio.h>
int main(void){
    int p,q,r,sum;
    printf("Enter the scores of three subjects\n")
    scanf("%d","%d","%d", &p,&q,&r);
    sum=p+q+r;
    float avg= sum/3;
    printf("The average upto 2 decimals is: %.2f\n");
    return 0;
}