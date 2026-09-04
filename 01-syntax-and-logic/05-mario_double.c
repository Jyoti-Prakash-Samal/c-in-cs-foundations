//to create one left and one right aligned pyramid of hash symbols
#include <stdio.h>
int main(){
    int i,j,k,height;
    do{
        printf("Enter the height of the pyramid between 1 and 8 both inclusive\n");
        scanf("%d", &height);
}while (height < 1 || height > 8); //to prompt the user to enter a valid height 
 for(i=1; i<=height; i++){ //to print the left aligned pyramid
        for(j=1; j<=height-i; j++){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf("#");
        }
        printf("  "); //to print the space between the two pyramids
        for(k=1; k<=i; k++){ //to print the right aligned pyramid
            printf("#");
        }
        printf("\n");
    }
}