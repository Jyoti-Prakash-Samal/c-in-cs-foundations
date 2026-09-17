//to calculate grade using memory allocation
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n, i;
    do {
        printf("Enter the number of subjects: \n");
        scanf("%d", &n);
    } while (n <= 0);
    float *marks = malloc(n* sizeof(float));
    float sum=0.0, average=0.0;
    if (marks == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(i=0;i<n;i++){
        printf("Enter marks of %d subject\n", i+1);
        scanf("%f", &marks[i]);
        sum+=marks[i];
    }
    average = sum / n;
    printf("Total marks: %.2f\n", sum);
    printf("Average marks: %.2f\n", average);
    free(marks);
    return 0;
}