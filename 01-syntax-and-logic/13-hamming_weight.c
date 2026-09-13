#include <stdio.h>
int main(void){
    int n,i,c=0;
    printf("Enter a number:\n ");
    scanf("%d",&n);
    for(i=31;i>=0;i--)
{
    if((n>>i)&1)
    c++;
}
printf("Hamming weight of the number is: %d \n",c);
return 0;
}