#include <stdio.h>
int main(){
    int counter=3,height=5,i,j,k;
    while(counter>0){
        printf("%d \n",counter);
        --counter;
    }
    printf("Blastoff\n");
    printf("Grid size: %d x %d \n",height,height);
for(i=0;i<height;i++){
    for(j=0;j<height-i-1;j++){
        printf(" "); //print spaces
    }
    for(k=0;k<=i;k++){
        printf("#"); //print blocks
    }
    printf("\n"); //new line after each row
    }
    return 0;
    }