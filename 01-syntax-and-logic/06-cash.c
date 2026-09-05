//to return change in minimum number of coins
#include <stdio.h>
int main(){
    int ch, i=0;
    do{
        printf("Enter the change i owe you in cents \n");
        scanf("%d",&ch);
    }while(ch<0); //to prompt the user to enter a valid change
    i+=ch/25; //to calculate the number of quarters
    ch=ch%25; //to calculate the remaining change after quarters
    i+=ch/10; //to calculate the number of dimes   
    ch=ch%10; //to calculate the remaining change after dimes
    i+=ch/5; //to calculate the number of nickels
    ch=ch%5; //to calculate the remaining change after nickels
    i+=ch/1; //to calculate the number of pennies
    printf("The minimum number of coins is %d\n",i); //to print the minimum number of coins
    return 0;
}