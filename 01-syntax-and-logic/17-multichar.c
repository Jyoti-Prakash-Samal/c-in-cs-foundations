#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int length;

    /* 1. Request the expected length of the string */
    printf("Enter the expected length of the project name (no spaces): ");
    
    /* Input validation to ensure a positive integer is entered */
    if (scanf("%d", &length) != 1 || length <= 0) {
        printf("Error: Invalid input. Length must be a positive integer.\n");
        return 1;
    }

    /* 2. Allocate memory dynamically on the heap */
    /* Note: length + 1 is required to accommodate the null terminator ('\0') */
    char *projectName = (char *)malloc((length + 1) * sizeof(char));

    /* 3. Validate memory allocation */
    if (projectName == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    /* 4. Read the string input */
    printf("Enter the project name: ");
    scanf("%s", projectName);

    /* 5. Output the result and allocation details */
    printf("\n--- Project Details ---\n");
    printf("Project Name: %s\n", projectName);
    printf("Total memory allocated: %d bytes\n", (length + 1));

    /* 6. Deallocate memory to prevent memory leaks */
    free(projectName);
    projectName = NULL; /* Nullify pointer to prevent dangling pointer issues */

    return 0;
}