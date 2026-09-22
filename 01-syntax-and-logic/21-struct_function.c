// Typedef aur Struct ko Function mein bhejna
#include <stdio.h>

// Aaj ka magic: 'typedef struct'
// Isse hume baar-baar 'struct' keyword nahi likhna padega!
typedef struct {
    char name[50];
    int id;
    float cgpa;
} Student; // Ab 'Student' directly ek data type ban gaya (jaise int)

// Naya Concept: Poori bori ko function mein bhejna
void printIDCard(Student s) {
    printf("\n=== IIIT ID CARD ===\n");
    printf("Name : %s\n", s.name);
    printf("ID   : %d\n", s.id);
    printf("CGPA : %.2f\n", s.cgpa);
    printf("====================\n");
}

int main(void) {
    // Dekh, yahan 'struct Student' nahi likha, seedha 'Student' likha hai!
    Student s1; 

    printf("Enter Name: ");
    scanf(" %[^\n]", s1.name);
    
    printf("Enter ID: ");
    scanf("%d", &s1.id);
    
    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa);
    
    // Bori (s1) ko seedha function ke andar pass kar diya
    printIDCard(s1);
    
    return 0;
}