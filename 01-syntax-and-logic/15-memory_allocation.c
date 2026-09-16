//to allocate memory for an array of integers using malloc and free the allocated memory
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *ptr=malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Memory allocation successful\n");
    printf("The elements are: \n");
    for(i=0;i<n;i++){
        ptr[i]=(i+1)*10;
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}