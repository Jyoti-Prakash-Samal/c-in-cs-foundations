#include <stdio.h>

// Kal wala same typedef concept
typedef struct {
    char name[50];
    int id;
    float gpa;
} Student;

int main(void) {
    // NAYA CONCEPT: Array of Structures
    // Ab humne 3 students ki jagah (array) ek sath bana li
    Student cse_batch[3]; 

    printf("--- Enter Details for 3 Students ---\n");

    // Loop chala kar 3 bacchon ka input lenge
    for(int i = 0; i < 3; i++) {
        printf("\nStudent %d Details:\n", i + 1);
        
        printf("Name: ");
        // Kal wali magic trick (space wale naam ke liye)
        scanf(" %[^\n]", cse_batch[i].name); 
        
        printf("ID: ");
        scanf("%d", &cse_batch[i].id);
        
        printf("GPA: ");
        scanf("%f", &cse_batch[i].gpa);
    }

    // Loop chala kar sabka data mast table format mein print karenge
    printf("\n=== IIIT CSE BATCH RECORDS ===\n");
    for(int i = 0; i < 3; i++) {
        printf("ID: %d | Name: %s | GPA: %.2f\n", cse_batch[i].id, cse_batch[i].name, cse_batch[i].gpa);
    }

    return 0;
}