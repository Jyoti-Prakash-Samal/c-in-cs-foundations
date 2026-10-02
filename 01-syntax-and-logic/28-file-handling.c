#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *file = fopen("portfolio.txt", "w");
    
    if (file == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }
    
    fprintf(file, "Name: Jyoti Prakash Samal\n");
    fprintf(file, "Student ID: B126098\n");
    fprintf(file, "Institute: IIIT Bhubaneswar\n");
    fprintf(file, "Status: C Foundation 100%% Completed. Moving to C++ & Web Dev!\n");
    
    fclose(file);
    
    printf("File 'portfolio.txt' created successfully.\n");
    
    return 0;
}